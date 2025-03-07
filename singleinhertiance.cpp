#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void sound() {
        cout << "Animals make sounds" << endl;
    }
};

// Derived class 
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks!" << endl;
    }
};

int main() {
    Dog d;
    d.sound(); // Inherited from Animal
    d.bark();  // Defined in Dog
    return 0;
}
