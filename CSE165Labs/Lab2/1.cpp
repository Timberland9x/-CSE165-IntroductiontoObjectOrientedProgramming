#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    int num;
    cin >> num;
    if (num < 0)
    {
        cout << "NEGATIVE" << endl;
    }
    else
        cout << "POSITIVE" << endl;
    if ((num % 2) == 0)
    {
        cout << "EVEN" << endl;
    }
    else
        cout << "ODD" << endl;
}