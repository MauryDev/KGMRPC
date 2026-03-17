#include "QuittingService.h"
#include <Tools.Il2Cpp.ICalls.h>
#include <Il2CppUtils.h>
#include "../KoGaMa/KGMRPC.KoGaMa.h"
void KGMRPC::Tools::QuittingService::Install()
{
	mutexOnQuitting = std::make_shared<std::mutex>();
	auto onApplicationQuit = KGMRPC::KoGaMa::MVGameControllerBase::m_OnApplicationQuit;

	::Tools::Il2Cpp::Utils::HookFn(onApplicationQuit, Run, (void**)&funcOriginal);
}

void KGMRPC::Tools::QuittingService::Run(void* obj)
{
	funcOriginal(obj);
	std::lock_guard<std::mutex> lock(*mutexOnQuitting);
	for (const auto& fn : onQuitting)
	{
		fn();
	}
}

void KGMRPC::Tools::QuittingService::AddOnQuitting(const std::function<void()>& fn)
{
	std::lock_guard<std::mutex> lock(*mutexOnQuitting);
	onQuitting.push_back(fn);
}
