#include "KGMRPC.KoGaMa.h"

namespace KGMRPC::KoGaMa {
void MVGameControllerBase::Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo) {
::Tools::Il2Cpp::Metadata::InitClass(metadataInfo, 0, klass,fields.data(), fields.size(), methods.data(), methods.size());

}

void GameSessionData::Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo) {
::Tools::Il2Cpp::Metadata::InitClass(metadataInfo, 1, klass,fields.data(), fields.size(), methods.data(), methods.size());

}

void Application::Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo) {
::Tools::Il2Cpp::Metadata::InitClass(metadataInfo, 2, klass,fields.data(), fields.size(), methods.data(), methods.size());

}

    void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo) {
        MVGameControllerBase::Init(metadataInfo);
        GameSessionData::Init(metadataInfo);
        Application::Init(metadataInfo);
    }
}
