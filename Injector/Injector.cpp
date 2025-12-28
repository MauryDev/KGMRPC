// Injector.cpp : Define o ponto de entrada para o aplicativo.
//

#include "framework.h"
#include "Injector.h"
#include "UI/Window.h"
#include <imgui_stdlib.h>
#include <string>
#include "Injetor.h"
#include "PipeWin32/NamedPipeServer.h"

#include "Tools/Message.h"
#include <thread>
#include "Tools/zipTool.h"
#include "resources/resource.h"
#include "Tools/ByteStream.h"

Injector::Tools::Message<std::pair<int, void*>> messages;
PipeWin32::NamedPipeServer* server;




static bool isPrivate = false, isEnable = true;
void ThreadPipe()
{
    auto inj = Injetor::GetProcessByName("kogama.exe");
    if (inj.isOpen())
    {
        inj.Inject("KGMRPC.dll", [](const char* txt) {
            
        });
    }
    server = new PipeWin32::NamedPipeServer(L"\\\\.\\pipe\\RPCKGM",1);
    auto onMessage = [](PipeWin32::PipeInstance* instance, const std::vector<uint8_t>& message) {
        
		Injector::Tools::ByteStreamView bsview((uint8_t*)message.data(), message.size());
        auto msgtype = bsview.read<int>();
        if (msgtype == 1)
        {
            
            bool values[] = {isPrivate ,isEnable};
            Injector::Tools::ByteStream data;
            data.write(0x3);
            data.write(values);
            instance->send(data.data(), data.size());
        }
    };
    auto onLoop = [&inj](PipeWin32::NamedPipeServer* instance)
    {
        std::pair<int, void*> message;
        if (messages.tryGetMessage(message))
        {
            Injector::Tools::ByteStream data;
            data.write(message.first);
            if (message.first == 0x1 || message.first == 2)
            {
                auto val = (bool*)message.second;
                data.write(*val);
                instance->GetInstance(0)->send(data.data(), data.size());
                delete val;
            }
        }
        if (!inj.isOpen())
        {
            inj = inj.GetProcessByName("kogama.exe");
            if (inj.isOpen())
            {
                inj.Inject("KGMRPC.dll", [](const char* txt) {
                    });
            }
        }
    };
    
    server->run(onMessage, onLoop, [](PipeWin32::PipeInstance* p) {

        });
        
    
}

std::vector<uint8_t> GetResourceBytes(int resourceId)
{
    HMODULE hModule = GetModuleHandle(NULL);

    HRSRC hRes = FindResource(hModule, MAKEINTRESOURCE(resourceId), L"PNG");
    if (!hRes) return {}; 

    HGLOBAL hData = LoadResource(hModule, hRes);
    if (!hData) return {};

    DWORD dataSize = SizeofResource(hModule, hRes);
    if (dataSize == 0) return {};

    const uint8_t* dataPtr = static_cast<const uint8_t*>(LockResource(hData));
    if (!dataPtr) return {};

    return std::vector<uint8_t>(dataPtr, dataPtr + dataSize);
}

void SetupStyle()
{
    ImGuiStyle& style = ImGui::GetStyle();

    // Arredondamento (A chave para o visual moderno)
    style.WindowRounding = 12.0f;
    style.FrameRounding = 6.0f;
    style.PopupRounding = 6.0f;
    style.GrabRounding = 6.0f;

    // Espaçamento
    style.ItemSpacing = ImVec2(10, 10);
    style.WindowPadding = ImVec2(20, 20);

    // Cores (Tema Escuro Azulado)
    ImVec4* colors = style.Colors;
    colors[ImGuiCol_WindowBg] = ImVec4(0.09f, 0.09f, 0.12f, 0.96f); // Fundo quase preto/azul
    colors[ImGuiCol_TitleBg] = ImVec4(0.09f, 0.09f, 0.12f, 1.00f);
    colors[ImGuiCol_TitleBgActive] = ImVec4(0.15f, 0.55f, 0.85f, 1.00f); // Topo Azul
    colors[ImGuiCol_Button] = ImVec4(0.20f, 0.20f, 0.25f, 1.00f); // Botão "Minimizar" cinza escuro
    colors[ImGuiCol_ButtonHovered] = ImVec4(0.25f, 0.25f, 0.30f, 1.00f);
    colors[ImGuiCol_ButtonActive] = ImVec4(0.15f, 0.15f, 0.20f, 1.00f);
}
int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    static ImFont* font_title;
    static bool done = false;
    static bool popen = true;

    std::thread uiPipe = std::thread(ThreadPipe);
    uiPipe.detach();
    KoGaMa_Model::UI::Window window{};
    window.OnRender = [](KoGaMa_Model::UI::Window* that) {
       
        static bool first = true;
        static ImVec2 lastSize{};
        static std::string Log;
        static KoGaMa_Model::UI::ImageTextureInfo textureImage, textureImage2;
        if (first) {
            first = !first;
            auto image1 = GetResourceBytes(IDB_PNG2), image2 = GetResourceBytes(IDB_PNG1);
            that->LoadTextureFromMemory(image1.data(), image1.size(), &textureImage);
            that->LoadTextureFromMemory(image2.data(), image2.size(), &textureImage2);

            SetupStyle();
            ImGui::SetNextWindowPos(ImVec2(0, 0));
            ImGui::SetNextWindowSize(ImVec2(700.0f * that->mainScale, 400.0f * that->mainScale));
        }

        ImGui::Begin("KGMRPC - Inject", &popen, ImGuiWindowFlags_::ImGuiWindowFlags_NoMove | ImGuiWindowFlags_::ImGuiWindowFlags_NoCollapse);
        ImGui::PushFont(font_title);
       
        if (ImGui::Button("Minimizar##min"))
        {
			ShowWindow(that->hwnd, SW_MINIMIZE);
        }


        ImGui::Spacing();

        // Área dos Toggles (Centralizado ou com indentação)
        ImGui::Indent(10.0f);

        if (ImGui::BeginChild("##panel1", ImVec2(0, 210 * that->mainScale), true))
        {
            float imgSize = 32.0f;
            ImGui::Image(textureImage.out_srv, ImVec2(imgSize, imgSize));
            ImGui::SameLine();
            float currentY = ImGui::GetCursorPosY();
            float textCenterOffset = (imgSize - ImGui::GetTextLineHeight()) * 0.5f;
            ImGui::SetCursorPosY(currentY + textCenterOffset); // Empurra o cursor para baixo
            ImGui::TextUnformatted("Private Mode");
            ImGui::SameLine();

            float checkCenterOffset = (imgSize - ImGui::GetFrameHeight()) * 0.5f;
            ImGui::SetCursorPosY(currentY + checkCenterOffset);

            if (ImGui::Checkbox("##checkbox1", &isPrivate))
            {
                // Sua lógica original
                auto val = new bool(isPrivate);
                messages.postMessage(std::make_pair(1, val));
            }

            ImGui::Image(textureImage2.out_srv, ImVec2(imgSize, imgSize));
            ImGui::SameLine();
            currentY = ImGui::GetCursorPosY();
            textCenterOffset = (imgSize - ImGui::GetTextLineHeight()) * 0.5f;
            ImGui::SetCursorPosY(currentY + textCenterOffset); // Empurra o cursor para baixo
            ImGui::TextUnformatted("Enable Presence");
            ImGui::SameLine();

            checkCenterOffset = (imgSize - ImGui::GetFrameHeight()) * 0.5f;
            ImGui::SetCursorPosY(currentY + checkCenterOffset);

            if (ImGui::Checkbox("##checkbox2", &isEnable))
            {
                auto val = new bool(isEnable);
                messages.postMessage(std::make_pair(2, val));
            }
            ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(0.15f, 0.55f, 0.85f, 1.0f)); // Azul Forte
            ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(0.20f, 0.60f, 0.90f, 1.0f));
            ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImVec4(0.10f, 0.50f, 0.80f, 1.0f));

            // ImVec2(-1, 45) faz o botão ocupar toda a largura e ter 45px de altura
            if (ImGui::Button("Update Metadata Info", ImVec2(-1, 45)))
            {
                Injector::zipTool::FromUrl(".\\");
            }
            ImGui::PopStyleColor(3);
            ImGui::Spacing();

            // Rodapé Centralizado
            float windowWidth = ImGui::GetWindowSize().x;
            float textWidth = ImGui::CalcTextSize("Created by MauryDev").x;

            ImGui::SetCursorPosX((windowWidth - textWidth) * 0.5f);
            ImGui::TextColored(ImVec4(0.5f, 0.5f, 0.6f, 1.0f), "Created by MauryDev");
			ImGui::EndChild();
        }
       
       
        ImGui::PopFont();

        


        auto curSize = ImGui::GetWindowSize();
        if (curSize.x != lastSize.x || curSize.y != lastSize.y)
        {
			RECT rect;
			GetWindowRect(that->hwnd, &rect);
			auto pos = ImGui::GetWindowPos();
            SetWindowPos(that->hwnd, NULL,
                rect.left + pos.x, rect.top + pos.y,
                static_cast<int>(curSize.x),
                static_cast<int>(curSize.y),
                SWP_NOZORDER | SWP_NOACTIVATE);
            lastSize = curSize;
			ImGui::SetWindowPos(ImVec2(0, 0));
        }
        ImGui::End();

    };
    if (!window.CreateUI()) return -1;
    window.SetupUI();

    window.SetupPlatform();

    // Our state
    ImVec4 clear_color = ImVec4(0.0f, 0.0f, 0.0f, 0.00f);
    auto& io = ImGui::GetIO();
    font_title = io.Fonts->AddFontFromFileTTF("c:\\Windows\\Fonts\\lucon.ttf", 15.0f, NULL, io.Fonts->GetGlyphRangesDefault());



    // Main loop
    while (!done && popen)
    {
        // Poll and handle messages (inputs, window resize, etc.)
        // See the WndProc() function below for our to dispatch events to the Win32 backend.
        if (!window.BeforeRender(done)) continue;

        window._OnRender();
        // Rendering
        window.EndRender(clear_color);
    }

    // Cleanup
    window.Cleanup();
    return 0;
}