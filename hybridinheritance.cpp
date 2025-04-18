#include <iostream>
using namespace std;

class A {
public:
    int num;
    void setNum(int n) {    /*  hybrid       
         A
        / \
       B   C
        \ /
         D
*/
        num = n;
    }
};

class B : public A {
public:
    int getDouble() {
        return 2 * num;
    }
};

class C : public A {
public:
    int getTriple() {
        return 3 * num;
    }
};

// Hybrid inheritance
class D : public B, public C {
public:
    void showResults() {
        // Ambiguity: 'num' is inherited twice (once through B, once through C)
        // Need to resolve it explicitly
        cout << "Double from B = " << B::getDouble() << endl;
        cout << "Triple from C = " << C::getTriple() << endl;
    }
};

int main() {
    D obj;
    obj.B::setNum(5);  // Set value through B's path
    obj.C::setNum(5);  // Also set value through C's path
    obj.showResults();

    return 0;
}
