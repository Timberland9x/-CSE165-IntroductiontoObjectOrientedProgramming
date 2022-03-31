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
    string input;
    vector<vector<string>> V(10);

    while (input != "quit")
    {

        cin >> input;
        if (input != "quit")
            V[input.length() - 1].push_back(input);
    }
    cout << "\nOutput:" << endl;
    for (int i = 0; i < 10; i++)
    {
        if (!(V[i].empty()))
        {
            for (int j = 0; j < V[i].size(); j++)
            {
                cout << V[i][j] << " ";
            }
            cout << endl;
        }
    }
}