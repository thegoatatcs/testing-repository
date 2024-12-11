#include <cmath>
#include "complex.h"

#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844609550582231725359408128481117450284102701938521105559644622948954930381964428810
#define EULEURS 2.7182818284590452353602874713526624977572470936999595749669676277240766303535475945713821785251664274274663919320030599218174135966290435729003342952605956307381323286279434907632338298807531952510190115

Complex operator+(Complex const& obj)
{
    Complex res;
    res.real = real + obj.real;
    res.imag = imag + obj.imag;
    return res;
}

Complex operator-(Complex const& obj)
{
    Complex res;
    res.real = real - obj.real;
    res.imag = imag - obj.imag;
    return res;
}

Complex operator*(Complex const& obj)
{
    Complex res;
    res.real = (real * obj.real) - (imag * obj.imag);
    res.imag = (real * obj.imag) + (imag * obj.real);
    return res;
}

Complex operator/(const Complex &other) const {
    double denom = other.real * other.real + other.imag * other.imag;
    return Complex(((real * other.real) + (imag * other.imag)) / denom, ((imag * other.real) - (real * other.imag)) / denom);
}


Complex& Complex::operator+=(const Complex &other) {
    real += other.real;
    imag += other.imag;
    return *this;
}

Complex& Complex::operator-=(const Complex &other) {
    real -= other.real;
    imag -= other.imag;
    return *this;
}

Complex& Complex::operator*=(const Complex &other) {
    Complex res;
    res.real = (real * obj.real) - (imag * obj.imag);
    res.imag = (real * obj.imag) + (imag * obj.real);
    return *res;
}

Complex& Complex::operator/=(const Complex &other) {
    Complex temp;
    double denom = other.real * other.real + other.imag * other.imag;

    temp.real = ((real * other.real) + (imag * other.imag)) / denom;
    temp.imag = ((imag * other.real) - (real * other.imag)) / denom;
    return temp;
}

double abs(const Complex x) {
   double real = real(x);
   double imag = imag(x);
   return sqrt(real*real + imag*imag);
}

double arg(const Complex x){
   double real = real(x);
   double imag = imag(x);
   return atan(imag/real);
}

complex conj(const Complex x){
   double real = real(x);
   double imag = imag(x);
   return real-imag;
}

complex log10(const Complex x){
    return log(x)/log(10.0);
}

Complex cosh(Complex co){
	double x = co.real;
	double y = co.imag;
	double ex = std::exp(x);
	double EnegX = 1.0/EnegX;

	double realP = (ex + EnegX)/2.0;
	double imagP = (ex - EnegX)/2.0 * y;
	
	Complex ret(realP,imagP);
	return ret;
}

complex cos(const Complex x){
   double real = real(x);
   double imag = imag(x);
   double cosh = (pow(EULEURS, imag) + pow(EULEURS, -imag) / 2.0;
   double sinh = (pow(EULEURS, imag) - pow(EULEURS, -imag) / 2.0;
   return (cos(real) * cosh) + (sin(real) * sinh);
}

ostream& operator<<(ostream& os, const complex& x){
    os << x.real()<<" "<<x.imag()<<endl;
    return os;
}
istream& operator>>(istream& i, complex& x){
    double r,i;
    i >> r;
    i >> " ";
    i >> i;
    x.setReal(r);
    x.setImag(i);
    return i;
}
