#include "zipTool.h"
#include <string>
#include <filesystem>
#include <iostream>
#include <fstream>
#include <libzippp/libzippp.h>
#include <cpr/cpr.h>

using namespace libzippp;

bool Injector::zipTool::Unzip(const void* zipFile, int len, const char* extractTo)
{
	auto zf = ZipArchive::fromBuffer(zipFile, len);

    std::vector<ZipEntry> entries = zf->getEntries();
    std::vector<ZipEntry>::iterator it;
    for (it = entries.begin(); it != entries.end(); ++it) {
        if (it->isDirectory())
        {
            std::filesystem::create_directories(std::string(extractTo) + "/" + it->getName());
        }
        else if (it->isFile())
        {
            std::ofstream ofUnzippedFile(std::string(extractTo) + "/"  + it->getName());
            it->readContent(ofUnzippedFile);
            ofUnzippedFile.close();

        }

        //...
    }

    ZipArchive::free(zf);
	return false;
}

bool Injector::zipTool::FromUrl(const char* extractTo)
{
    cpr::Response r = cpr::Get(cpr::Url{ "https://raw.githubusercontent.com/MauryDev/KGMRPC/refs/heads/main/metadata.zip" });
    if (r.status_code == 200)
	    Unzip(r.text.c_str(),r.text.size(), extractTo);
    return true;
}


