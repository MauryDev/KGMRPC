#include "PipeService.h"
#include <memory>
#include <unordered_map>
#include <thread>
namespace KGMRPC::Tools::PipeService {
	namespace {
        using MapCallbacks = std::unordered_map<int, std::function<void(PipeWin32::NamedPipeClient& client, KGMRPC::Tools::ByteStreamView& bstream)>>;
		std::shared_ptr<PipeWin32::NamedPipeClient> client;
        std::shared_ptr<MapCallbacks> callbacks;
        const char* URL = "\\\\.\\pipe\\RPCKGM";
	}
	void Init()
	{
		client = std::make_shared<PipeWin32::NamedPipeClient>(URL);
        callbacks = std::make_shared<MapCallbacks>();
	}
    
	void OnMessage(PipeWin32::NamedPipeClient* that)
	{
        auto len = client->available();
        auto buffer = std::make_unique<int8_t[]>(len);
        client->receive(buffer.get(), len);
        KGMRPC::Tools::ByteStreamView message(buffer.get(), len);
        int typemessage = message.read<int>();

        if (callbacks)
        {
            auto value = callbacks->find(typemessage);
            if (value != callbacks->end())
            {
                value->second(*that, message);
            }
        }
        
	}

    void AddCallback(int id, const CallbackFunction& fn)
    {
        callbacks->insert({id, fn});
    }

    void Run()
    {
        client->Run(
            OnMessage,
            [](PipeWin32::NamedPipeClient* client) {},
            OnConnected);
    }

    void OnConnected(PipeWin32::NamedPipeClient* that)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
        try {
            client->send(0x1);
        } catch(...) { }
    }

}
