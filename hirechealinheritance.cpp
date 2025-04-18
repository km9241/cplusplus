#include <iostream>
using namespace std;

class A {
public:
    int num;
    void setNum(int n) {    /*        
         A
        / \
       B   C
 */
        num = n;
    }
};

// First derived class
class Square : public A {
public:
    int getSquare() {
        return num * num;
    }
};

// Second derived class
class Cube : public A {
public:
    int getCube() {
        return num * num * num;
    }
};

int main() {
    Square s;
    Cube c;

    s.setNum(3);  // Set num in Square
    cout << "Square: " << s.getSquare() << endl;

    c.setNum(4);  // Set num in Cube
    cout << "Cube: " << c.getCube() << endl;

    return 0;
}
