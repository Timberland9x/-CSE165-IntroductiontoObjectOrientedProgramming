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
    vector<string> vec;
    // cout << "Input:\n\t" << endl;
    while (input != "quit")
    {
        cin >> input;
        if (input == "quit")
            break;
        if (input.length() > 1)
        {
            vec.push_back(input);
        }
        else
        {
            for (int i = 0; i < vec.size(); i++)
            {
                // cout << vec[i] << endl;
                if (tolower(vec[i].at(0)) == tolower(input[0]))
                {
                    cout << vec[i] << endl;
                }
            }
        }
    }
}