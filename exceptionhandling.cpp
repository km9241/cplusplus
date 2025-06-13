#include <iostream>
using namespace std;

int main() {
    try { //ry	Code to try — might throw error If nothing goes wrong, the program continues normally.
        //If something "bad" happens and you use throw, control jumps to the matching catch.
        //try block contains the error causing code
        
        
        int a = 5, b = 0;

        if (b == 0)
            throw "Division by zero!";  // This is how you signal an error has occurred. throw a string literal

        int result = a / b;
        cout << "Result: " << result << endl;
    }
    catch (const char* error) { //his block catches the exception and deals with it.
        cout << "Error caught: " << error << endl;
    }

    return 0;
}
