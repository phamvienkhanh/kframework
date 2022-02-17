#ifndef INC_IWINDOW_H_
#define INC_IWINDOW_H_

class IWindow
{
public:
    virtual void init() = 0;
    virtual void update() = 0;
    virtual void render() = 0;

    IWindow(){}
    virtual ~IWindow(){}
};

#endif