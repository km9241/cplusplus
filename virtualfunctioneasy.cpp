#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* a;   // Pointer to base class
    Dog d;

    a = &d;
    a->sound();  // Output: Dog barks (not "Animal makes a sound")

    return 0;
}
