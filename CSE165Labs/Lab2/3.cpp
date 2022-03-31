#include <iostream>
#include <math.h>
using namespace std;

bool primeNum(int n)
{
    bool isPrime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
        }
    }
    return isPrime;
}

int main(int argc, char *argv[])
{
    int num = -1;
    cin >> num;
    if (num == 0 || num == 1)
    {
        cout << "0";
    }
    for (int i = 2; i < num; i++)
    {
        if (primeNum(i))
        {
            cout << i << endl;
        }
    }
}
// cout << "Ending Program" << endl;
