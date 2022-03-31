#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    int num = -1;
    while (num != 0)
    {
        cin >> num;
        if (num != 0)
        {
            if (num < 0)
            {
                cout << "NEGATIVE" << endl;
            }
            else
            {
                cout << "POSITIVE" << endl;
            }
            if ((num % 2) == 0)
            {
                cout << "EVEN" << endl;
            }
            else
            {
                cout << "ODD" << endl;
            }
            cout << endl;
        }
    }
    // cout << "Ending Program" << endl;
}