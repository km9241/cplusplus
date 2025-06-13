#include <iostream>
using namespace std;

class Person {
public:
    void hello() {
        cout << "Hello!" << endl;
    }
};

int main() {
    Person p;          // an object
    Person* ptr = &p;  // pointer to the object

    p.hello();         // Direct access using .
    ptr->hello();      // Access via pointer using ->

    return 0;
}
/*Person p;             // A normal object sitting in memory
Person* ptr = &p;     // A pointer pointing to the memory address of that object(Person tells the compiler what type of data
 the pointer will point to.In this case, it means:ptr is a pointer to a Person object.)

 p.hello(); → calls hello() directly on the object
ptr->hello(); → calls hello() through the pointer
*/

