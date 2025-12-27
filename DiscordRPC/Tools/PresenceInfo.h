#pragma once
#include <string>
#include <Tools.Il2Cpp.Lib.h>
#include "Region.h"
namespace KGMRPC::Tools
{
	struct InfoData {
		int game_id;
		int mode;
		::Tools::Il2Cpp::Il2CppString region;
	};
	struct PresenceInfo {
		bool inited;
		std::string state;
		std::string regionTxt;
		std::string modeTxt;
		std::string details;
		PresenceInfo();
		void Init(Region::RegionServer server, InfoData& infoData);
	};
}