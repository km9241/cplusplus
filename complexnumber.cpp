#include <iostream>
using namespace std;

class Complex {
private:
    double real, imag;

public:
    // Constructor to initialize complex number
    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }

    // Function to multiply two complex numbers
    Complex operator*(const Complex &c) {
        Complex result;
        result.real = (real * c.real) - (imag * c.imag);
        result.imag = (real * c.imag) + (imag * c.real);
        return result;
    }

    // Function to display the complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    // Creating two complex number objects
    Complex c1(3, 2), c2(1, 7);

    // Multiplying two complex numbers
    Complex result = c1 * c2;

    // Displaying the result
    cout << "First Complex Number: ";
    c1.display();
    
    cout << "Second Complex Number: ";
    c2.display();
    
    cout << "Multiplication Result: ";
    result.display();

    return 0;
}
