#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Eating...\n";
    }
};

// Derived class from Animal
class Dog : public Animal {
public:
    void bark() {
        cout << "Barking...\n";
    }
};

// Derived class from Dog
class Puppy : public Dog {
public:
    void weep() {
        cout << "Weeping...\n";
    }
};

int main() {
    Puppy p;
    p.eat();   
    p.bark();  
    p.weep();  
    return 0;
}
