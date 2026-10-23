#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void show() {
        cout << real << " + " << imag << "i";
    }
};

int main() {
    Complex a(2, 3), b(4, 5), c;
    c = a + b;      // a.operator+(b)
    c.show();       // Output: 6 + 8i
}