#pragma once
#include <Windows.h>
#include <TlHelp32.h>
#include <iostream>

class Injetor
{
    DWORD _id;
    HANDLE hProcess;
public:
    Injetor();
    Injetor(DWORD id);

    static Injetor GetProcessByName(const char* lpProcessName);
    bool isOpen();

    bool Inject(const char* dllName, void (*log)(const char* txt));
};

