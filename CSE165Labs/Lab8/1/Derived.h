#ifndef Derived_h
#define Derived_h

#include "ADT.h"

using namespace std;

class Derived : public ADT
{

public:
    Derived()
    {
    }
    void doSomething()
    {
        cout << "I did something" << endl;
    }
    void doSomethingElse()
    {
        cout << "I did something else" << endl;
    }
    void dontDoThis()
    {
    }
};

#endif