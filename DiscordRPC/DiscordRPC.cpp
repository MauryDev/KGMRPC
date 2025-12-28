

#define _CRT_SECURE_NO_WARNINGS /* thanks Microsoft */
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <discord_rpc.h>
#include "KoGaMa/KGMRPC.KoGaMa.h"
#include "Tools/PathWork.h"
#include "Tools.Il2Cpp.ICalls.h"
#include<iostream>
#include "Tools/Message.h"
#include "Tools/HTTPUtils.h"
#include "Tools/PresenceInfo.h"
#include "PipeWin32/NamedPipeClient.h"
#include "Tools/ByteStream.h"

static const char* APPLICATION_ID = "951741204914110504";
using ActionUpdate = void(*)(void* that);
ActionUpdate ptrRealOnUpdate = nullptr;


KGMRPC::Tools::Message<KGMRPC::Tools::InfoData> msg;
KGMRPC::Tools::Region::RegionServer region;
bool isPrivate = false, isEnable = true;
static void updateDiscordPresence(::KGMRPC::Tools::InfoData infoData)
{
    static KGMRPC::Tools::PresenceInfo presenceInfo;
    static time_t currentTime = std::time(0);
    presenceInfo.Init(region, infoData);
    if (isEnable)
    {
        DiscordRichPresence discordPresence;
        memset(&discordPresence, 0, sizeof(discordPresence));

        discordPresence.state = presenceInfo.state.c_str();
        discordPresence.largeImageKey = presenceInfo.regionTxt.c_str();
        discordPresence.largeImageText = presenceInfo.regionTxt.c_str();
        discordPresence.smallImageKey = presenceInfo.modeTxt.c_str();
        discordPresence.smallImageText = presenceInfo.modeTxt.c_str();
        discordPresence.startTimestamp = currentTime;
        if (!isPrivate)
        {
            discordPresence.details = presenceInfo.details.c_str();
        }

        Discord_UpdatePresence(&discordPresence);
    }
    else {
        Discord_ClearPresence();
    }
    Discord_RunCallbacks();
}





void OnUpdate(void* that);
static void RPCInit()
{
    PipeWin32::NamedPipeClient client("\\\\.\\pipe\\RPCKGM");
    DiscordEventHandlers handlers;
    memset(&handlers, 0, sizeof(handlers));
    handlers.ready = nullptr;
    handlers.disconnected = nullptr;
    handlers.errored = nullptr;
    handlers.joinGame = nullptr;
    handlers.spectateGame = nullptr;
    handlers.joinRequest = nullptr;
    Discord_Initialize(APPLICATION_ID, &handlers, 1, NULL);
    

    Discord_ClearPresence();
    auto dllworkPath = KGMRPC::Tools::PathWork::GetPathDllWork();
	auto kogamaPath = KGMRPC::Tools::PathWork::GetKoGaMaPath();
    auto rootPath = kogamaPath.parent_path().parent_path().filename().string();
    auto str_region = rootPath.substr(rootPath.find("-") + 1);
    region = KGMRPC::Tools::Region::FromStr(str_region);

#if NDEBUG
    auto metadataFile = (dllworkPath / str_region / "KGMRPC.KoGaMa.dat").string();
    auto metadataICallsFile = (dllworkPath / str_region / "Tools.Il2Cpp.ICalls.dat").string();

#else
    auto metadataFile = (dllworkPath / "KGMRPC.KoGaMa.dat").string();
    auto metadataICallsFile = (dllworkPath / "Tools.Il2Cpp.ICalls.dat").string();


#endif // NDEBUG

    auto metadata = Tools::Il2Cpp::Metadata::ReadMetadataFromFile(metadataFile.c_str());
    auto metadataICall = Tools::Il2Cpp::Metadata::ReadMetadataFromFile(metadataICallsFile.c_str());

    Tools::Il2Cpp::Init();

    auto domain = Tools::Il2Cpp::il2cpp_domain_get();
    Tools::Il2Cpp::Il2CppThread::Attach(domain);
    Tools::Il2Cpp::ICalls::Init(metadataICall);
    KGMRPC::KoGaMa::Init(metadata);


    auto method = KGMRPC::KoGaMa::MVGameControllerBase::m_Update;
    Tools::Il2Cpp::Utils::HookFn(method, OnUpdate, (void**)&ptrRealOnUpdate);


    while (true)
    {
        static bool firstUse = true;
       
        
        client.Run(
            [](PipeWin32::NamedPipeClient* client) {
                auto len = client->available();
                auto buffer = std::make_unique<int8_t[]>(len);
				client->receive(buffer.get(), len);
				KGMRPC::Tools::ByteStreamView message(buffer.get(), len);
                int typemessage = message.read<int>();
                if (typemessage == 1)
                {
					message.read(isPrivate);
                }
                else if (typemessage == 2)
                {
                    message.read(isEnable);
                }
                else if (typemessage == 3)
                {
                    bool vals[2];
                    message.read(vals);
                    isPrivate = vals[0];
                    isEnable = vals[1];

                }
            },
            [](PipeWin32::NamedPipeClient* client) {
                if (firstUse)
                {
                    client->send(0x1);
                    firstUse = false;

                }
                else
                {
                    KGMRPC::Tools::InfoData data;
                    if (msg.tryGetMessage(data))
                    {
                        updateDiscordPresence(data);
                    }
                }
                
            },
            [](PipeWin32::NamedPipeClient* client) {
                
            });
        std::this_thread::sleep_for(std::chrono::seconds(1));


    }
    
}


void OnUpdate(void* that) {
    
    using namespace KGMRPC::KoGaMa;

    static auto isOk = std::chrono::high_resolution_clock::now();
    auto cur_time = std::chrono::high_resolution_clock::now();
    auto duration = cur_time - isOk;
    auto seconds = std::chrono::duration_cast<std::chrono::seconds>(duration);

    auto gamesession = MVGameControllerBase::m_get_GameSessionData();
    if (!gamesession.isNull() && seconds >= std::chrono::seconds(10))
    {
        auto planetID = GameSessionData::f_planetID.Get<int>(gamesession);

        auto gameMode = GameSessionData::f_gameMode.Get<int>(gamesession);

        auto region = GameSessionData::f_region.Get<Il2CppString>(gamesession);
        msg.postMessage({planetID,gameMode,region});
        isOk = cur_time;
    }
	ptrRealOnUpdate(that);
}


DWORD WINAPI mainThreadDll(LPVOID param)
{
    while (GetModuleHandleA("GameAssembly.dll") == 0)
    {
        Sleep(5000);
    }
    Sleep(1000);



    KGMRPC::Tools::PathWork::DllWork = (HMODULE)param;

    auto dllworkPath = KGMRPC::Tools::PathWork::GetPathDllWork();
    auto dllDiscord = dllworkPath / "discord-rpc.dll";
    LoadLibrary(dllDiscord.c_str());
    RPCInit();
    return 0;
}
BOOL WINAPI DllMain(
    HINSTANCE hinstDLL,  // handle to DLL module
    DWORD fdwReason,     // reason for calling function
    LPVOID lpvReserved)  // reserved
{
    // Perform actions based on the reason for calling.
    switch (fdwReason)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(
            nullptr,  // default security attributes
            0,        // use default stack size  
            mainThreadDll,
            hinstDLL,  // no thread function parameters
            0,        // use default creation flags
            nullptr); // receive thread identifier
        // Do thread-specific initialization.
        break;

    case DLL_THREAD_ATTACH:
        
        break;

    case DLL_THREAD_DETACH:
        // Do thread-specific cleanup.
        break;

    case DLL_PROCESS_DETACH:

        if (lpvReserved != nullptr)
        {
            break; // do not do cleanup if process termination scenario
        }

        // Perform any necessary cleanup.
        break;
    }
    return TRUE;  // Successful DLL_PROCESS_ATTACH.
}