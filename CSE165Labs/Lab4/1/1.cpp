#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <fstream>
#include <ctype.h>
#include <algorithm>
#include "Stash.h"
using namespace std;

int main(int argc, char *argv[])
{
    Stash sh;
    sh.initialize(sizeof(int));

    ifstream in;
    in.open("input.txt", ios::in);
    float num;
    while (in >> num)
    {
        sh.add(&num);
    }
    in.close();

    for (int j = 0; j < sh.count(); j++)
        cout << *(float *)sh.fetch(j)
             << endl;
    sh.cleanup();
}
