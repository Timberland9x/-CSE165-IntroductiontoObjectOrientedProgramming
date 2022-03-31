#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <fstream>
#include <ctype.h>
#include <algorithm>
#include "LinkedList.h"
using namespace std;

int main(int argc, char *argv[])
{
    // why is this object fornot working?
    LinkedList l;
    LinkedList::Link k;
    ifstream in;
    in.open("input.txt", ios::in);
    double num;
    while (in >> num)
    {
        // cout << num;
        //  how do i add numbers to the linked list?
        l.add(num);
    }

    in.close();

    // while ((s = (double *)li.pop()) != 0)
    // {
    //     cout << *s << endl;
    //     // delete s;
    // }
    l.print();
    l.cleanup();
}
