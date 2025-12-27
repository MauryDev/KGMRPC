#include "HTTPUtils.h"

#include <windows.h>
#include <winhttp.h>
#include <iostream>
#include <nlohmann/json.hpp>
#pragma comment(lib, "winhttp.lib")

using json = nlohmann::json;
std::string KGMRPC::Tools::HTTPUtils::GetGameName(Region::RegionServer server, int id)
{
    HINTERNET hSession = NULL;
    HINTERNET hConnect = NULL;
    HINTERNET hRequest = NULL;

    // 1. Initialize WinHTTP
    hSession = WinHttpOpen(L"WinHTTP Example/1.0",
        WINHTTP_ACCESS_TYPE_DEFAULT_PROXY,
        WINHTTP_NO_PROXY_NAME,
        WINHTTP_NO_PROXY_BYPASS, 0);

    if (hSession) {
        // 2. Connect to the Server
        hConnect = WinHttpConnect(hSession, GetHostServer(server), INTERNET_DEFAULT_HTTPS_PORT, 0);
    }

    if (hConnect) {
        // 3. Open an HTTP Request (HTTPS)
        std::wstring url = L"/game/{}/member/?count=1";
        auto firstSymbol = url.find(L"{}");
        url = url.replace(firstSymbol, 2, std::to_wstring(id));
        hRequest = WinHttpOpenRequest(hConnect, L"GET", url.c_str(),
            NULL, WINHTTP_NO_REFERER,
            WINHTTP_DEFAULT_ACCEPT_TYPES,
            WINHTTP_FLAG_SECURE); // Key for HTTPS
    }

    if (hRequest) {
        // 4. Send the Request
        WinHttpSendRequest(hRequest, WINHTTP_NO_ADDITIONAL_HEADERS, 0,
            WINHTTP_NO_REQUEST_DATA, 0, 0, 0);
    }

    if (hRequest) {
        // 5. Receive the Response
        WinHttpReceiveResponse(hRequest, NULL);
    }

    int length = 0;
    DWORD dwSize = 4;
    auto result = WinHttpQueryHeaders(hRequest,
        WINHTTP_QUERY_CONTENT_LENGTH | WINHTTP_QUERY_FLAG_NUMBER, // Request Content-Length as a number
        WINHTTP_HEADER_NAME_BY_INDEX,
        &length,
        &dwSize, // This will receive the size of the required buffer
        WINHTTP_NO_HEADER_INDEX);

    // 6. Read Response Data (simplified)
    DWORD dwBytesRead = 0;
    auto szBuffer = std::make_unique<char[]>(length + 1);
    while (WinHttpReadData(hRequest, szBuffer.get(), length, &dwBytesRead) && dwBytesRead > 0) {
        szBuffer.get()[dwBytesRead] = '\0';
    }
    json data = json::parse(szBuffer.get());
    auto firstMember = data["/data/0/name"_json_pointer].get<std::string>();
    // 7. Close Handles
    if (hRequest) WinHttpCloseHandle(hRequest);
    if (hConnect) WinHttpCloseHandle(hConnect);
    if (hSession) WinHttpCloseHandle(hSession);
    return firstMember;
}

const wchar_t* KGMRPC::Tools::HTTPUtils::GetHostServer(Region::RegionServer server)
{
    switch (server)
    {
    case Region::RegionServer::BR:
        return L"kogama.com.br";
    case Region::RegionServer::WWW:
        return L"www.kogama.com";
    case Region::RegionServer::Friends:
        return L"friends.kogama.com";
    default:
        return nullptr;
    }
}
