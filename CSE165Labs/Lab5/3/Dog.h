#ifndef DOG_H
#define DOG_H

#include <cassert>
#include <iostream>
#include "Animal.h"
using namespace std;
class Dog : public Animal
{

public:
    Dog(string name1, int age1)
    {
        cout << "Creating Dog" << endl;
        Animal::setName(name1);
        Animal::setAge(age1);
    }

    ~Dog()
    {
        cout << "Deleting Dog" << endl;
    }
    void feed()
    {
        cout << "A small bone, please!!" << endl;
    }
};
#endif