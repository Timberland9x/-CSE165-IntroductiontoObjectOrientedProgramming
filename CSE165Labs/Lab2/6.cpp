#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
#include <string>

int getBit(int n, int index);
int setBit(int n, int index);
int clearBit(int n, int index);
int main(int argc, char *argv[])
{
    int n;
    int index;
    cout << "Enter a Decimal Number: ";
    cin >> n;
    cout << "Enter an index: ";
    cin >> index;
    string binary = bitset<8>(n).to_string(); // to binary
    cout << "Binary representation of " << n << " is: " << stoi(binary) << endl;
    cout << "Get bit at position " << index << ": " << getBit(n, index) << endl;
    cout << "Binary representation after setting bit at position " << index << ": " << setBit(n, index) << endl;
    cout << "Binary representation after clearing  bit at position " << index << ": " << clearBit(n, index) << endl;
}
int getBit(int n, int index)
{
    int num;
    string b = bitset<8>(n).to_string();
    for (int i = b.length(); i > 0; i--)
    {
        // cout << b[i] << endl;
        if ((b.length() - 1 - i) == index)
        {
            // cout << "b.length() = " << b.length() << endl;
            // cout << "i " << i << endl;
            // cout << b[i];
            return b[i] - '0';
        }
    }
    return -1;
}
int setBit(int n, int index)
{
    string b = bitset<8>(n).to_string();
    for (int i = b.length(); i > 0; i--)
    {
        if ((b.length() - 1 - i) == index)
        {
            b[i] = '1';
            return stoi(b);
        }
    }
    return -1;
}
int clearBit(int n, int index)
{
    string b = bitset<8>(n).to_string();
    for (int i = b.length(); i > 0; i--)
    {
        if ((b.length() - 1 - i) == index)
        {
            b[i] = '0';
            return stoi(b);
        }
    }
    return -1;
}
// cout << "Ending Program" << endl;
