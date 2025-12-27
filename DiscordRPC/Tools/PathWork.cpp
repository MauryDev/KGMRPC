#include "PathWork.h"
#include <windows.h>
std::filesystem::path KGMRPC::Tools::PathWork::GetPathDllWork()
{
	char currentDir[1024];
	DWORD charsCopied = GetModuleFileNameA(DllWork, currentDir, 1024); // Using ANSI version
	std::filesystem::path workpath(currentDir);

	workpath = workpath.parent_path();
	return workpath;

}

std::filesystem::path KGMRPC::Tools::PathWork::GetKoGaMaPath()
{
	char currentDir[1024];
	DWORD charsCopied = GetModuleFileNameA(GetModuleHandle(NULL), currentDir, 1024); // Using ANSI version
	std::filesystem::path workpath(currentDir);

	workpath = workpath.parent_path();
	return workpath;
}
