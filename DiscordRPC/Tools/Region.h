#pragma once
#include <string>
namespace KGMRPC::Tools::Region {

	enum class RegionServer {
		None,
		BR,
		WWW,
		Friends
	};
	RegionServer FromStr(const std::string& value);
}