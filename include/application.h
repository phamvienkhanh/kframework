#ifndef INC_APPLICATION_H_
#define INC_APPLICATION_H_

#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"
#include <stdio.h>
#if defined(IMGUI_IMPL_OPENGL_ES2)
#include <GLES2/gl2.h>
#endif
#include <GLFW/glfw3.h> // Will drag system OpenGL headers

class Application
{
private:
    GLFWwindow* m_window;
    ImVec4      m_clearColor;

private:
    void setupImGui();
public:
    void run();

    Application(/* args */);
    ~Application();
};

#endif