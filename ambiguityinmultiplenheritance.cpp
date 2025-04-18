#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Show from class A" << endl;
    }
};

class B {
public:
    void show() {
        cout << "Show from class B" << endl;
    }
};

class C : public A, public B {
    // Ambiguity! Both A and B have show()
};

int main() {
    C obj;
    // obj.show(); //  ERROR: request is ambiguous

    //  Resolving ambiguity
    obj.A::show();  // Calls A's show()
    obj.B::show();  // Calls B's show()

    return 0;
}
