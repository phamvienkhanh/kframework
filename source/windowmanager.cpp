#include "windowmanager.h"
#include "spdlog/spdlog.h"
#include "nlohmann/json.hpp"
#include "spdlog/sinks/stdout_color_sinks.h"

WindowManager* WindowManager::s_instance = nullptr;

WindowManager* WindowManager::GetInstance()
{
    if(s_instance == nullptr)
        s_instance = new WindowManager();
    return s_instance;
}

WindowManager::WindowManager()
{

}

int WindowManager::addWindow(IWindow* window)
{
    m_listWindows.push_back(window);

    // parse explicitly
    auto j3 = nlohmann::json::parse(R"({"happy": true, "pi": 3.141})");
    std::string s = j3.dump();

    spdlog::info(s);

    return m_listWindows.size() - 1;
}

void WindowManager::removeWindow(int windowIdx)
{
    if(windowIdx >= m_listWindows.size())
        return;
    
    m_listWindows.erase(m_listWindows.begin() + windowIdx);
}

void WindowManager::renderAllWindows()
{
    for (auto i = 0; i < m_listWindows.size(); i++) {
       auto window =  m_listWindows[i];
       if(window)
            window->render();
    }
}