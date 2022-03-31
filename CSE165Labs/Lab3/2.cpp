#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <fstream>
#include <ctype.h>
using namespace std;

int main(int argc, char *argv[])
{
    string input;
    int num;
    vector<string> vec;
    vector<int> numVector;
    // cout << "Input:\n\t" << endl;
    while (num != -2)
    {
        cin >> input;
        cin >> num;
        vec.push_back(input);
        numVector.push_back(num);
        if (input == "-1")
        {
            // cout << endl;
            vec.push_back("\n");
        }
        for (int i = 0; i < num; i++)
        {
            // cout << input;
            if (i == num - 1)
            {
                // cout << endl;
            }
        }
    }
    cout << "Output:" << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < numVector[i]; j++)
        {
            cout << vec[i];
        }
        cout << endl;
    }
}