#include <iostream>
using namespace std;

// Base class 1
class Number1 {
public:
    int a;
    void setA(int x) {
        a = x;
    }
};

// Base class 2
class Number2 {
public:
    int b;
    void setB(int y) {
        b = y;
    }
};

// Derived class using multiple inheritance
class Result : public Number1, public Number2 {
public:
    void displaySum() {
        cout << "Sum = " << (a + b) << endl;
    }
};

int main() {
    Result obj;
    obj.setA(10);  // Set value from Number1
    obj.setB(20);  // Set value from Number2
    obj.displaySum();  // Should print 30

    return 0;
}
