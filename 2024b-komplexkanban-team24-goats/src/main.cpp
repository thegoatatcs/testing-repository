#define CATCH_CONFIG_MAIN
#include "../tests/catch_amalgamated.hpp"

#include <cstdlib>
#include <iostream>
#include "../src/complex.h"
#include "../src/fac.cpp"
using namespace std;
#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

class Complex{
    private:
    double real;
    double imag;
    public:
    Complex(double r = 0.0, double i = 0.0): 
    real(r), imag(i) {}

    double getReal(){
        return real;
    }
    double getImag(){
        return imag;
    }

    Complex operator+(const Complex &other) const;
    Complex operator-(const Complex &other) const;
    Complex operator*(const Complex &other) const;
    Complex operator/(const Complex &other) const;

    Complex& operator+=(const Complex &other);
    Complex& operator-=(const Complex &other);
    Complex& operator*=(const Complex &other);
    Complex& operator/=(const Complex &other);

    bool operator==(const Complex &other) const;
    bool operator!=(const Complex &other) const;

};

int main () {
    cout << "Hello World" << endl;
    cout << "Factorial test: " << Factorial(5) << endl;

    Complex a(5.0, 6.0), b(2.0, 3.0);

    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";

    cout << "a + b = " << (a + b) << "\n";
    cout << "a - b = " << (a - b) << "\n";
    cout << "a * b = " << (a * b) << "\n";
    cout << "a / b = " << (a / b) << "\n";

    cout << "|a| = " << abs(a) << "\n";
    cout << "conj(a) = " << conj(a) << "\n";
    cout << "arg(a) = " << arg(a) << " radians\n";

    cout << "cosh(a) = " << cosh(a) << "\n";
    cout << "cos(a) = " << cos(a) << "\n";
    cout << "log10(a) = " << log10(a) << "\n";
}
