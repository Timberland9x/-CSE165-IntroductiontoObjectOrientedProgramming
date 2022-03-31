#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <fstream>
#include <ctype.h>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
    int num = -1;
    vector<int> numVector;

    while (num != 0)
    {
        cin >> num;
        if (num > 0)
            numVector.push_back(num);
        else if (num < 0)
        {
            // cout << "Erase" << num << endl;
            numVector.erase(std::remove(numVector.begin(), numVector.end(), abs(num)), numVector.end());
        }
    }
    int sum = 0;
    for (int i = 0; i < numVector.size(); i++)
    {
        sum += numVector[i];
        cout << numVector[i] << " ";
    }
    cout << sum << endl;
}