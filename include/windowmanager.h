#ifndef INC_WINDOWMANAGER_H_
#define INC_WINDOWMANAGER_H_

#include "iwindow.h"
#include <vector>

class WindowManager
{
private:
    static WindowManager* s_instance;
    std::vector<IWindow*> m_listWindows;
    WindowManager();
public:
    static WindowManager* GetInstance();
    int  addWindow(IWindow* window);
    void removeWindow(int windowIdx);
    void renderAllWindows();
};


#endif