#ifndef Header_h
#define Header_h
#include <iostream>

using namespace std;

class AppRect
{
public:
    int x, y, w, h;
    AppRect() {}
    AppRect(float pos, float size, float w, float h)
    {
        this->x = pos;
        this->y = size;
        this->w = w;
        this->h = h;
    }
    // AppRect rect()
    // {
    //     rect.x = x;
    //     rect().y = y;
    //     rect().w = w;
    //     rect().h = h;
    // }
};
class AppWindow
{

public:
    int x, y, w, h;
    AppRect rectangle;

    AppWindow() {}

    const AppRect rect()
    {
        return rectangle;
    }
    AppWindow(int x, int y, int w, int h)
    {
    }
    AppWindow(const AppRect &r)
    {
        rectangle = r;
    }
    virtual void resize(int x, int h)
    {
        rectangle.x = x;
        rectangle.h = h;
    }
};

class CircleWin : public AppWindow
{

public:
    CircleWin(int x, int y, int w, int h)
    {

        rectangle.x = x;
        rectangle.y = y;
        rectangle.w = w;
        rectangle.h = h;
    }
    CircleWin(const AppRect &r)
    {
        AppWindow::rectangle = r;
    }
    void resize(int w, int h)
    {
        if (w < h)
        {
            cout << "radius: " << w << endl;
        }
        else
            cout << "radius: " << h << endl;
    }
};
class RectWin : public AppWindow
{
public:
    RectWin(int x, int y, int w, int h)
    {
        rectangle.x = x;
        rectangle.y = y;
        rectangle.w = w;
        rectangle.h = h;
    }
    RectWin(const AppRect &r)
    {
        AppWindow::rectangle = r;
    }
    void resize(int w, int h)
    {
        cout << "area: " << w * h << endl;
    }
};
#endif