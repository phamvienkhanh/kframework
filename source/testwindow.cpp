#include "testwindow.h"

void TestWindow::update()
{

}

void TestWindow::init()
{    
    auto lang = TextEditor::LanguageDefinition::CPlusPlus();
    m_textEditor.SetText(m_textContent);
    m_textEditor.SetLanguageDefinition(lang);

    ImGuiIO& io = ImGui::GetIO();
    m_fontioCousine = io.Fonts->AddFontFromFileTTF("../3rd/imgui/misc/fonts/Roboto-Medium.ttf", 22.0f);
}

void TestWindow::render()
{
    ImGui::Begin("Another Window");   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)        
    ImGui::PushFont(m_fontioCousine);
    m_textEditor.Render("texteditor");
    ImGui::PopFont();
    ImGui::End();
}

TestWindow::~TestWindow()
{

}

TestWindow::TestWindow(/* args */)
{
    init();
}