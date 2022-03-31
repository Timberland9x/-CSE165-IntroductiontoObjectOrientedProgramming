#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <fstream>
#include <ctype.h>
#include <algorithm>
#include "Stash.h"

using namespace std;

int main(int argc, char *argv[])
{
    Stash sh;
    sh.initialize(sizeof(int));

    char input;
    int num;
    vector<string> vec;
    vector<int> numVector;
    int amt;
    // cout << "Input:\n\t" << endl;
    cin >> amt;
    sh.inflate(amt);
    while (input != '&' && num != 99)
    {
        // cout << "Starting while loop" << endl;
        cin >> input;
        cin >> num;
        if (input != '&' && num != 99)
        {
            // cout << "input: " << input << endl;
            // cout << "num: " << num << endl;
            for (int i = 0; i < abs(num); i++)
            {

                // cout << "count " << i << " " << input << endl;
                sh.add(&(input));
                if (num < 0)
                {
                    sh.add("\n");
                }
            }
        }
    }

    cout << "Output:" << endl;
    for (int j = 0; j < sh.count(); j++)
        cout << (char *)sh.fetch(j);
    cout << sh.amtinflate << endl;
    cout << sh.quantity << endl;
    sh.cleanup();
}
