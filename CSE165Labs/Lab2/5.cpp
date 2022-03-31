#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    int num1;
    int num2;
    cin >> num1;
    cin >> num2;
    int *p1 = &num1;
    int *p2 = &num2;

    cout << num1 << " * " << num2 << " = " << (*p1 * (*p2)) << endl;
    cout << num1 << " + " << num2 << " = " << (*p1 + *p2) << endl;
    cout << num1 << " - " << num2 << " = " << (*p1 - *p2) << endl;
    cout << num1 << " / " << num2 << " = " << (*p1 / *p2) << endl;
}
// cout << "Ending Program" << endl;
