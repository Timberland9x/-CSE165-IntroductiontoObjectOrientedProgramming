#ifndef Vec_h
#define Vec_h

#include <iostream>
#include "Vec.h"
using namespace std;

class Vec
{
public:
    float x, y;
    static Vec null;
    Vec()
    {
        this->x = 0;
        this->y = 0;
    }

    Vec(float x, float y)
    {
        this->x = (x);
        this->y = (y);
    }
    void add(Vec n)
    {
        this->x += n.x;
        this->y += n.y;
    }
    void print()
    {

        cout << "(x, y) = " << x << ", " << y << " " << endl;
    }
};

Vec Vec::null(0.0f, 0.0f);

#endif