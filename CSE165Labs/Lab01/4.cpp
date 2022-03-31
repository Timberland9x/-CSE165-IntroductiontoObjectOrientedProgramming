#include <iostream>
#include <math.h>
#include <fstream>
#include <string>
#include <ctype.h>
using namespace std;

int main(int argc, char *argv[])
{
    // get data from words.txt
    fstream infile;
    infile.open("words.txt");
    string stringFromFile;
    string find;
    int wordCounter;
    // user input word to find
    cin >> find;

    while (getline(infile, stringFromFile))
    { // loop for every letter in text
        for (int i = 0; i < stringFromFile.length(); i++)
        {
            // counter for find.length()
            int counter = 0;
            int k = 0;
            int j = i;
            // will go through each element till reach length of find
            while (k < find.length())
            {
                // lower case the letters then match letters
                if (tolower(stringFromFile[j]) == tolower(find[k]))
                {
                    counter++;
                }
                j++;
                k++;
            }
            // if equal then match/word is found
            if (counter == find.length())
            {
                // word counter
                wordCounter++;
            }
        }
    }
    // print user input & count
    cout << "The word \"" << find << "\" has a count of " << wordCounter << "." << endl;
}