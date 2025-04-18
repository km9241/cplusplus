#include <iostream>
using namespace std;

class Box {         /*class ClassName {
    friend returnType functionName(arguments);
};
*/
private:
    int length;

public:
    Box() : length(0) {}

    // Declare friend function(Sometimes, you want a function to have access to a class’s private data without making it a class member. That’s where a friend function comes in handy)
    friend void setLength(Box& b, int len);//b is a reference to an object of class Box where box is a return type
};

// Define friend function
void setLength(Box& b, int len) {
    b.length = len;  // Accessing private member
    cout << "Length set to: " << b.length << endl;
}

int main() {
    Box box;
    setLength(box, 10);
    return 0;
}
