#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    int radius;
    cout << "Input the radius of a circle ";
    cin >> radius;
    cout << 3.14159265358979323846 * (radius * radius) << endl;
}