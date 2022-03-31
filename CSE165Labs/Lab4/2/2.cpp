#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <fstream>
#include <ctype.h>
#include <algorithm>
#include "Stack.h"
using namespace std;

int main(int argc, char *argv[])
{
    Stack st;
    st.initialize();

    ifstream in;
    in.open("input.txt", ios::in);
    double num;
    while (in >> num)
    {
        st.push(new double(num));
    }
    in.close();

    double *s;

    while ((s = (double *)st.pop()) != 0)
    {
        cout << *s << endl;
        // delete s;
    }
    st.cleanup();
    cout << endl;
}
