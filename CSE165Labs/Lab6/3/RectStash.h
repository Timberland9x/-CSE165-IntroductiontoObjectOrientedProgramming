#ifndef RectSTASH_H
#define RectSTASH_H

#include <cassert>
#include <iostream>
#include <vector>
#include "Rect.h"
#include "Vec.h"
using namespace std;

class RectStash
{
public:
    vector<Rect> stash;
    RectStash()
    {
    }
    void add(Rect *in)
    {
        stash.push_back(*in);
    }
    vector<Rect> get()
    {
        return stash;
    }
    ~RectStash()
    {
        cout << "Cleaning up RectStash" << endl;
    }
};

#endif