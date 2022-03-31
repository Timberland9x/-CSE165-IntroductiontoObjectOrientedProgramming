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
    // delcaring varibles
    string input;
    vector<string> V;
    vector<string> lV;
    vector<string> output;
    int wordCounter;
    // loop stop when input string is quit
    while (input != "quit")
    {
        // user input
        cin >> input;
        if (input != "quit")
        {
            // if input length >=4 then add to vector V
            if (input.length() >= 4)
                V.push_back(input);
            else if (input.length() <= 3)
            {
                // if input length <=3 then copy V to lV
                lV = V;
                // lowercase all letters in lV & input
                for (int i = 0; i < V.size(); i++)
                {
                    for (int j = 0; j < V[i].size(); j++)
                    {
                        lV[i][j] = tolower(V[i][j]);
                    }
                    for (int k = 0; k < input.length(); k++)
                    {
                        input[k] = tolower(input[k]);
                    }
                    // cout << (V[i]) << endl;
                    // cout << "input.length() = " << input.length() << endl;
                    // see if all the strings that were read up to that point, that begin with the same characters as input
                    if ((lV[i].substr(0, input.length()).find(input)) != string::npos)
                    {
                        // cout << "Printing: " << lV[i].substr(0, input.length()) << endl;
                        output.push_back(V[i]);
                    }
                }
            }
        }
    }
    // print the vector output
    for (int i = 0; i < output.size(); i++)
        cout << output[i] << " ";
    cout << endl;
}