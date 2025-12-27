#pragma once
#include <string>
#include "Region.h"

namespace KGMRPC::Tools::HTTPUtils {
	std::string GetGameName(Region::RegionServer server, int id);
	const wchar_t* GetHostServer(Region::RegionServer server);
}

