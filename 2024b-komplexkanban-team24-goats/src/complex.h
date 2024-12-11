#ifndef COMPLEX_H
#define COMPLEX_H



#include <iostream>
#include <complex>

using namespace std;

class Complex {
  private:
    double real, imagine;
  public:
    Complex (double r, double i){
      real = r;
      imagine = i;
    }

  Complex operator+(const Complex &obj) const; 
  Complex operator-(const Complex &obj) const;
  Complex operator*(const Complex &obj) const;
  Complex operator/(const Complex &obj) const;

  Complex& operator+=(const Complex &other);
  Complex& operator-=(const Complex &other);
  Complex& operator*=(const Complex &other);
  Complex& operator/=(const Complex &other);

  friend double real(Complex com);
  friend double imag(Complex the);

  friend double abs(const Complex x);
  friend double arg(const Complex x);
  friend Complex conj(const Complex x);
  friend Complex log10(const Complex x);
  friend Complex cosh(Complex co);
  friend Complex cos(const Complex x);

  friend std::ostream& operator<<(std::ostream& os, const Complex& x);
  friend std::istream& operator>>(std::istream& is, Complex& x);
//"hi"



};
//------------------------------------- ARITHMETIC LIBRARY FUNCTIONS -------------------------------------------


#endif
