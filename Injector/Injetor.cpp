#include "Injetor.h"

Injetor::Injetor()
{
	this->_id = NULL;
    this->hProcess = INVALID_HANDLE_VALUE;
}

Injetor::Injetor(DWORD id)
{
	this->_id = id;
    this->hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, _id);
}

Injetor Injetor::GetProcessByName(const char* lpProcessName)
{
    char lpCurrentProcessName[255];

    PROCESSENTRY32 ProcList{};
    ProcList.dwSize = sizeof(ProcList);

    const HANDLE hProcList = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (hProcList == INVALID_HANDLE_VALUE)
        return Injetor(-1);

    if (!Process32First(hProcList, &ProcList))
        return Injetor(-1);

    wcstombs_s(nullptr, lpCurrentProcessName, ProcList.szExeFile, 255);

    if (lstrcmpA(lpCurrentProcessName, lpProcessName) == 0)
        return Injetor(ProcList.th32ProcessID);

    while (Process32Next(hProcList, &ProcList))
    {
        wcstombs_s(nullptr, lpCurrentProcessName, ProcList.szExeFile, 255);

        if (lstrcmpA(lpCurrentProcessName, lpProcessName) == 0)
            return Injetor(ProcList.th32ProcessID);
    }

    return -1;
}

bool Injetor::isOpen()
{
    DWORD exitCode;
    if (GetExitCodeProcess(hProcess, &exitCode) && exitCode == STILL_ACTIVE) {
        return true;
    }
    return false;
}

bool Injetor::Inject(const char* dllName, void (*log)(const char* txt))
{
    char lpFullDLLPath[MAX_PATH];

    const DWORD dwFullPathResult = GetFullPathNameA(dllName, MAX_PATH, lpFullDLLPath, nullptr);
    if (dwFullPathResult == 0)
    {
        log("An error is occured when trying to get the full path of the DLL.\n");
        return false;
    }

    if (hProcess == INVALID_HANDLE_VALUE)
    {
        log("An error is occured when trying to open the target process.\n");
        return false;
    }

    log("[PROCESS INJECTION]\n");
    log("Process opened successfully.\n");

    const LPVOID lpPathAddress = VirtualAllocEx(hProcess, nullptr, lstrlenA(lpFullDLLPath) + 1, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
    if (lpPathAddress == nullptr)
    {
        log("An error is occured when trying to allocate memory in the target process.\n");
        return false;
    }

    log("Memory allocate");

    const DWORD dwWriteResult = WriteProcessMemory(hProcess, lpPathAddress, lpFullDLLPath, lstrlenA(lpFullDLLPath) + 1, nullptr);
    if (dwWriteResult == 0)
    {
        log("An error is occured when trying to write the DLL path in the target process.\n");
        return false;
    }

    log("DLL path writen successfully.\n");

    const HMODULE hModule = GetModuleHandleA("kernel32.dll");
    if (hModule == INVALID_HANDLE_VALUE || hModule == nullptr)
        return false;

    const FARPROC lpFunctionAddress = GetProcAddress(hModule, "LoadLibraryA");
    if (lpFunctionAddress == nullptr)
    {
        log("An error is occured when trying to get \"LoadLibraryA\" address.\n");
        return false;
    }

    log("LoadLibraryA");

    const HANDLE hThreadCreationResult = CreateRemoteThread(hProcess, nullptr, 0, (LPTHREAD_START_ROUTINE)lpFunctionAddress, lpPathAddress, 0, nullptr);
    if (hThreadCreationResult == INVALID_HANDLE_VALUE)
    {
        log("An error is occured when trying to create the thread in the target process.\n");
        return false;
    }
    WaitForSingleObject(hThreadCreationResult, INFINITE);

    DWORD exitCode = 0;
    if (GetExitCodeThread(hThreadCreationResult, &exitCode)) {
        // No caso do LoadLibraryA, o exitCode é o HMODULE (endereço da DLL carregada)
        if (exitCode == 0) {
            std::cerr << "ERRO: O LoadLibraryA no processo alvo retornou NULL (A DLL não pôde ser carregada)." << std::endl;
            // Geralmente causado por dependências ausentes da DLL ou caminho incorreto.
        }
        else {
            std::cout << "DLL Injetada com sucesso! Endereço base: 0x" << std::hex << exitCode << std::dec << std::endl;
        }
    }
    else {
        log("Falha ao obter o código de saída do thread.");
    }

    // 6. Limpeza
    CloseHandle(hThreadCreationResult);
    VirtualFreeEx(hProcess, lpPathAddress, 0, MEM_RELEASE);
    return true;
}
