#include <iostream>
#include "Dog.h"
#include "display.h"
using namespace std;

int main(int argc, const char *argv[])
{
    vector<Animal *> vecAnimal;
    int n;
    char animalDog;
    string name;
    int age;
    cin >> n;

    while (n != 0)
    {
        cin >> animalDog;
        cin >> name;
        cin >> age;
        cout << n << endl;

        if (animalDog == 'A')
        {
            Animal *a = new Animal();
            a->setName(name);
            a->setAge(age);
            vecAnimal.push_back(a);
        }
        else if (animalDog == 'D')
        {
            Dog *d = new Dog(name, age);
            vecAnimal.push_back(d);
        }

        n--;
    }
    display(vecAnimal);
    return 0;
}
