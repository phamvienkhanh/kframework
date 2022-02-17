#ifndef INC_TESTWINDOW_H_
#define INC_TESTWINDOW_H_

#include "iwindow.h"
#include "TextEditor.h"

class TestWindow : public IWindow
{
private:
    TextEditor  m_textEditor;
    std::string m_textContent;
    ImFont*     m_fontioCousine;
public:
    virtual void update() override;
    virtual void init() override;
    virtual void render() override;

    TestWindow(/* args */);
    ~TestWindow();
};

#endif