#include "application.h"
#include "windowmanager.h"
#include "testwindow.h"

int main(int, char**)
{
    Application app;

    IWindow* testWindow = new TestWindow();
    WindowManager::GetInstance()->addWindow(testWindow);

    app.run();

    return 0;
}
