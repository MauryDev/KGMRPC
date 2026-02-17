#pragma once
#include "PipeWin32/NamedPipeClient.h"
#include <functional>
#include "ByteStream.h"


namespace KGMRPC::Tools::PipeService {
	using CallbackFunction = std::function<void(PipeWin32::NamedPipeClient& client, KGMRPC::Tools::ByteStreamView& bstream)>;
	void Init();
	void OnMessage(PipeWin32::NamedPipeClient* that);
	void AddCallback(int id,const CallbackFunction& fn);
	void Run();
	void OnConnected(PipeWin32::NamedPipeClient* that);
}