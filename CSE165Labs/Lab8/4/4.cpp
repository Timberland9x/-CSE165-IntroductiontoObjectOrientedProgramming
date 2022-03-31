#include <iostream>
#include "Matrix.h"
#include <vector>

#include <fstream>
#include <string>

using namespace std;

int main(int argc, const char *argv[])
{
    int col, row;
    cout << "sample row size: ";
    cin >> row;
    cout << "sample column size: ";
    cin >> col;

    Matrix<Matrix<int>> x(row, col);

    int counter = 0;

    for (int i = 0; i < x.size(); i++)
    {
        for (int j = 0; j < x[i].size(); j++)
        {
            // cout << i;
            x[i].push_back(j);
            counter++;
        }
    }
    x.print();

    return 0;
}