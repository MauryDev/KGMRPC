#include "PresenceInfo.h"
#include "HTTPUtils.h"
#include <memory>
#include <algorithm>
#include <Il2CppUtils.h>
KGMRPC::Tools::PresenceInfo::PresenceInfo()
{
	this->inited = false;
}

void KGMRPC::Tools::PresenceInfo::Init(Region::RegionServer server, InfoData& infoData)
{
	if (this->inited)
		return;

    this->inited = true;
    auto buffer = std::make_unique<char[]>(128);
    auto state = std::make_unique<char[]>(128);
    auto regionChars = std::unique_ptr<char[]>(::Tools::Il2Cpp::Utils::convert_il2cpstring_to_char_array(infoData.region));
    auto regionTxt = std::string(regionChars.get());
    std::transform(regionTxt.begin(), regionTxt.end(), regionTxt.begin(), ::toupper);
    auto gameName = infoData.mode == 2 ? "" : KGMRPC::Tools::HTTPUtils::GetGameName(server, infoData.game_id);
    sprintf_s(state.get(),128, "Server %s", regionTxt.data());
    this->state = state.get();
    this->regionTxt = regionChars.get();
    auto modeText = infoData.mode == 1 ? "play" : "edit";
    this->modeTxt = modeText;
    if (infoData.mode == 1)
    {
        sprintf_s(buffer.get(),128, "Playing %s", gameName.c_str());
    }
    else if (infoData.mode == 0) {
        sprintf_s(buffer.get(), 128, "Building %s", gameName.c_str());
    }
    else if (infoData.mode == 2)
    {
        sprintf_s(buffer.get(), 128, "Building Avatar");
    }
    this->details = buffer.get();


}
