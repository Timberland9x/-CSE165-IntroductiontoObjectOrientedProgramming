#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>

#include "Sortable.h"
#include <vector>
using namespace std;

template <class T>
class Matrix : public Sortable<T>
{

public:
    int row;
    int col;
    // Sortable<Sortable<T>> v;
    Matrix(int row, int col);
    void print();
    bool resize();
};
template <class T>
Matrix<T>::Matrix(int row, int col)
{
    this->row = row;
    this->col = col;
}
template <class T>
void Matrix<T>::print()
{
    cout << "test print" << endl;
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            // cout << i;
            // cout << this->print << " ";
        }
        cout << endl;
    }
}
template <class T>
bool Matrix<T>::resize()
{
    return true;
}

#endif