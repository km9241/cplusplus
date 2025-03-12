#include <iostream>
using namespace std;

class MyClass {
public:
    // Constructor
    /*Constructor (MyClass()): This function is called 
    when an object of the class is created. In this case, it prints "Constructor called: Object created."*/
    MyClass() {
        cout << "Constructor called: Object created." << endl;
    }
    
    // Destructor
    /*Destructor (~MyClass()): This function is called when the object goes 
    out of scope or is explicitly deleted. In this case, it prints "Destructor called: Object destroyed."*/
    ~MyClass() {
        cout << "Destructor called: Object destroyed." << endl;
    }
};

int main() {
    // Create an object of MyClass
    MyClass obj;

    // Destructor will be called automatically when the object goes out of scope
    return 0;
}
