#include "MainUpdate.h"
#include <Tools.Il2Cpp.Lib.h>
#include "../KoGaMa/KGMRPC.KoGaMa.h"
namespace KGMRPC::Tools {
	namespace {
		void(*oldFunc)(void*);
		void OnUpdate(void* ptr)
		{
			oldFunc(ptr);
		}
	}
	
	void KGMRPC::Tools::MainUpdate::Install() {
		auto method = KGMRPC::KoGaMa::MVGameControllerBase::m_Update;
		::Tools::Il2Cpp::Utils::HookFn(method, OnUpdate, (void**)&oldFunc);
	}

	void Tools::MainUpdate::AddUpdate(UpdateFuncDel del)
	{
		this->UpdateFuncs.push_back(del);
	}

}
