#ifndef AddressBook_H
#define AddressBook_H
#include "Entry.h"
#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

struct AddressBook
{
    vector<Entry> b;
    void add(Entry *e)
    {
        // printing the last input twice

        b.push_back(*e);
    }
    void print()
    {
        // printing the last input twice
        cout << endl;
        for (int i = 0; i < b.size(); i++)
        {
            cout << i << ": ";
            b[i].print();
            cout << endl;
        }
    }
};

#endif