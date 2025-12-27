#pragma once
#include <filesystem>
#include <Windows.h>

namespace KGMRPC::Tools::PathWork {
	std::filesystem::path GetPathDllWork();
	std::filesystem::path GetKoGaMaPath();
	inline HMODULE DllWork;
}