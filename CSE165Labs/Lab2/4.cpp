#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
    int num;
    char hex[20];

    while (num != -1)
    {
        cout << "Enter a Postive Number: ";
        cin >> num;
        if (num != -1)
        {
            sprintf(hex, "%X", num);
            cout << "Hex: " << hex << endl;
            string binary = bitset<8>(num).to_string(); // to binary
            cout << "Binary: " << binary << endl;
            cout << endl;
        }
    }
}
// cout << "Ending Program" << endl;
