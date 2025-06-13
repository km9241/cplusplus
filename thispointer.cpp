#include <iostream>
using namespace std; /*Shadowing happens when a parameter (or a local variable) has the same name as a member variable
. In that case, the local name “hides” or “shadows” the member variable inside the function scope.
*/
//Each object has its own memory address, and this points to it during function calls.
/*The parameter name hides (or "shadows") the member variable name.

So name = name; just copies the value of the parameter into itself(garbage value). No change.

The member variable name remains uninitialized.

*/

class Student {
private:
    string name;
    int age;

public:
    // Constructor with parameters that shadow member variables
    Student(string name, int age) {
        // Without 'this', these lines would assign parameters to themselves
        this->name = name;
        this->age = age;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Create a student object
    Student s1("Alice", 18);
    s1.display();

    // Create another student
    Student s2("Bob", 20);
    s2.display();

    return 0;
}
//the this pointer stores the address of the current object
