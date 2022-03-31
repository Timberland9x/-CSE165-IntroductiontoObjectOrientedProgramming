#include <iostream>
#include "Sortable.h"
#include <vector>

#include <fstream>
#include <string>

using namespace std;

int main(int argc, const char *argv[])
{
    // vector<int> v;
    Sortable<int> vNum;

    fstream newfile;

    newfile.open("input1.txt", ios::in);
    if (newfile.is_open())
    {
        int num;
        while (newfile >> num)
        {
            vNum.push_back(num);
        }
    }
    vNum.sort();
    for (int i = 0; i < vNum.size(); i++)
    {
        cout << vNum[i] << " ";
    }
    cout << endl;

    newfile.close();

    Sortable<char> vChar;

    // fstream newfile;

    newfile.open("input2.txt", ios::in);
    if (newfile.is_open())
    {
        char ch;
        while (newfile >> ch)
        {
            vChar.push_back(ch);
        }
    }
    vChar.sort();
    for (int i = 0; i < vChar.size(); i++)
    {
        cout << vChar[i] << " ";
    }
    cout << endl;
    newfile.close();

    Sortable<string> vStr;

    // fstream newfile;

    newfile.open("input3.txt", ios::in);
    if (newfile.is_open())
    {
        string str;
        while (newfile >> str)
        {
            vStr.push_back(str);
        }
    }
    vStr.sort();
    for (int i = 0; i < vStr.size(); i++)
    {
        cout << vStr[i] << " ";
    }
    cout << endl;

    newfile.close();

    return 0;
}