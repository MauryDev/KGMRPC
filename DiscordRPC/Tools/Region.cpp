#include "Region.h"
namespace KGMRPC::Tools::Region
{
    RegionServer FromStr(const std::string& value)
    {

        if (value == "BR")
            return RegionServer::BR;
        if (value == "WWW")
            return RegionServer::WWW;
        if (value == "Friends")
            return RegionServer::Friends;

        return RegionServer::None;
    }

}