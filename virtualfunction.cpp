#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void eat() {
        cout << "I'm eating generic food." << endl;
    }
};

// Derived class 1
class Cat : public Animal {
public:
    void eat() {
        cout << "I'm eating cat food." << endl;
    }
};

// Derived class 2
class Dog : public Animal {
public:
    void eat() {
        cout << "I'm eating dog food." << endl;
    }
};

// Function taking base class pointer
void function1(Animal *xyz) {
    xyz->eat(); // Will call the derived version if virtual is used
}

int main() {
    Animal *ptr;

    Cat catObj;
    Dog dogObj;

    ptr = &catObj;
    function1(ptr);  // Output: I'm eating cat food.

    ptr = &dogObj;
    function1(ptr);  // Output: I'm eating dog food.

    return 0;
}
/*🧠 What You Expect:
You probably want the program to print:

I'm eating cat food.
Because ptr is pointing to a Cat object.

❌ What Actually Happens:
It will print:

I'm eating generic food.
That’s because in C++, function overriding works polymorphically only when the base class function is marked virtual.

✅ Fix:
In your Animal class, change:

void eat() {
    cout << "I'm eating generic food.";
}
To:

virtual void eat() {
    cout << "I'm eating generic food.";
}
This tells the compiler: “If this function is overridden in a derived class, call the derived version at runtime (not the base one).”

✅ After Fixing:
With virtual added, now when you call function1(ptr) where ptr points to a Cat or Dog, the correct eat() function is called based on the actual object type.*/