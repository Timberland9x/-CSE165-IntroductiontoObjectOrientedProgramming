#ifndef Rect_h
#define Rect_h

#include <iostream>
#include "Vec.h"
#include <cmath>
using namespace std;

class Rect
{
public:
    float x, y, l, w;
    // Vec null;
    static Vec null;
    // Rect()
    // {
    //     this->x = 0;
    //     this->y = 0;
    // }

    Rect()
    {
    }
    Rect(float x, float y, float l, float w)
    {
        this->x = (x);
        this->y = (y);
        this->l = l;
        this->w = w;
    }
    bool contains(Vec n)
    {
        //(n.x >= x && n.y <= y) && (n.x >= x + l && n.y >= y) && (n.x <= x && n.y <= y - w) && (n.x >= x + l && n.y <= y - w)
        // cout << n.x << " >= " << x << " && " << n.y << " <= " << y << " ";
        // cout << n.x << " <= " << x + l << " && " << n.y << " <= " << y << " ";
        // cout << n.x << " <= " << x << " && " << n.y << " <= " << y - w << endl;
        // cout << endl;
        // cout << x << endl;
        // Vec x1(x, y);
        // Vec x2(x + l, y);
        // Vec y1(x, y - w);
        // Vec y2(x + l, y - w);
        // x1.print();
        // x2.print();
        // y1.print();
        // y2.print();

        // n.print();
        // cout << endl;
        //(n.x >= x && n.y >= y) && (n.x >= x + l && n.y <= y + w) && (n.x <= x + l && n.y >= y + w) && (n.x <= x + l + w && n.y <= y + l + w)
        if ((n.x >= x && n.y <= y) && (n.x <= x + l && n.y <= y) && (n.x >= x && n.y >= y - w) && (n.x <= x + l && n.y >= y - w))
        {
            // cout << "true" << endl;
            return true;
        }
        // cout << "false" << endl;
        return false;
    }
};

#endif