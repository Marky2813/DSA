// Task 3: overload binary + as a member function
#include <iostream>
#include <cmath>
using namespace std;

class Complex {
private:
    double real, imag;

public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // c1 + c2  is translated by the compiler into  c1.operator+(c2)
    // left operand  -> the object calling the function (*this)
    // right operand -> the parameter
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    void display() const {
        cout << real << (imag < 0 ? " - " : " + ") << fabs(imag) << "i\n";
    }
};

int main() {
    Complex c1(3, 2);
    Complex c2(1, -7);

    Complex c3 = c1 + c2;              // same as c1.operator+(c2)

    cout << "c1 = "; c1.display();
    cout << "c2 = "; c2.display();
    cout << "c3 = "; c3.display();     // 4 - 5i

    return 0;
}