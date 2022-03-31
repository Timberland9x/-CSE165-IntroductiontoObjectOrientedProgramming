#ifndef CIRCLE_H
#define CIRCLE_H

#include <cassert>
#include <iostream>

using namespace std;
class Circle
{
    double x, y, r;

public:
    double area = 3.14159;
    Circle()
    {
        this->x = 0, this->y = 0, this->r = 1;
    }

    Circle(double x, double y, double r)
    {
        this->x = x, this->y = y, this->r = r;
    }

    double getX()
    {
        return x;
    }
    double getY()
    {
        return y;
    }
    double getR()
    {
        return r;
    }

    void setX(double x)
    {
        this->x = x;
    }
    void setY(double y)
    {
        this->y = y;
    }
    void setR(double r)
    {
        this->r = r;
    }
    // double area()
    // {
    //     return (3.14159 * r * r);
    // }
};
#endif