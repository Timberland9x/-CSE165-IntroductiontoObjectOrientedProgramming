#ifndef _Animal_h
#define _Animal_h

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal
{
    string name;
    int age;

private:
    static int count;

public:
    Animal()
    {
        cout << "Creating Generic Animal" << endl;
        name = "Generic Animal";
        age = 0;
        count++;
    }

    static int gcount()
    {

        return count;
    }

    void display(const vector<Animal *> &list)
    {
    }

    string getName()
    {
        return name;
    }

    void setName(string name)
    {
        this->name = name;
    }

    int getAge()
    {
        return age;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    ~Animal()
    {
        cout << "Deleting Generic Animal" << endl;
    }

    void feed()
    {
        cout << "Some food, please!" << endl;
    }
};

#endif