#include <iostream>

using namespace std;

struct one
{
    char c_one;
    double d_one;
};

struct two
{
    char c_one;
    char c_two;
    double d_one;
};

struct three
{
    char c_one;
    char c_two;
    char c_three;
    double d_one;
};

struct four
{
    char c_one;
    char c_two;
    char c_three;
    char c_four;
    double d_one;
};
struct five
{
};
struct six
{
    char c_one;
    int i_one;
    char c_two;
};
struct seven
{
    char c_one;
    char c_two;
    int i_one;
};
int main(int argc, const char *argv[])
{
    cout << "containing 1 char and 1 double: " << sizeof(struct one) << endl;
    cout << "2 chars and 1 double: " << sizeof(struct two) << endl;
    cout << "3 chars and 1 double: " << sizeof(struct three) << endl;
    cout << "4 chars and 1 double: " << sizeof(struct four) << endl;
    cout << "an empty struct: " << sizeof(struct five) << endl;
    cout << "1 char, followed by 1 int and then 1 char: " << sizeof(struct six) << endl;
    cout << "2 chars followed by 1 int: " << sizeof(struct seven) << endl;
}