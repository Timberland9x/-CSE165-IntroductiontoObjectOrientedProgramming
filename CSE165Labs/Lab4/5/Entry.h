#ifndef Entry_H
#define Entry_H
using namespace std;
#include <iostream>

struct Entry
{
    string name, lastname, email;
    void setName(string n)
    {
        name = n;
    }
    void setLastname(string l)
    {
        lastname = l;
    }
    void setEmail(string e)
    {
        email = e;
    }
    void print()
    {
        cout << name << endl;
        cout << lastname << endl;
        cout << email << endl;
    }
};
#endif