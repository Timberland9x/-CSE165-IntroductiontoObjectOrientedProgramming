#include <iostream>
#include <math.h>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    fstream infile;
    infile.open("words.txt");
    string stringFromFile;
    int counter;
    while (getline(infile, stringFromFile))
    {
        for (int i = 0; i < stringFromFile.length(); i++)
        {
            // cout << stringFromFile[i]; // print the data of the string
            if (stringFromFile[i] == ' ')
            {
                counter++;
            }
        }
    }
    cout << counter << endl;
}