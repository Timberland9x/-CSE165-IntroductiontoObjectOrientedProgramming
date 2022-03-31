#ifndef Data_h
#define Data_h

#include <vector>

using namespace std;

class Data
{
public:
    vector<int> ivec;

    Data()
    {
    }

    // Adds a number to the data set.
    void add(int num)
    {
        // cout << "Add" << endl;
        ivec.push_back(num);
    }
    void print()
    {
        // cout << "Print" << endl;
        for (int i = 0; i < ivec.size(); i++)
        {
            cout << ivec[i] << " ";
        }
        cout << endl;
    }
    /*
    Sorts the data set in ascending order.
    You may implement any sortingalgorithm here,
    for example, max sort, bubble sort, insertion sort,
    merge sort, quick sort, etc...
    There is no need to try to implement the
    most efficient one, any one will do
    */
    void sort()
    {
        for (int i = 0; i < ivec.size(); i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
                if (ivec[i] < ivec[j])
                {
                    int temp;
                    temp = ivec[i];
                    ivec[i] = ivec[j];
                    ivec[j] = temp;
                }
            }
        }
    }
};

#endif