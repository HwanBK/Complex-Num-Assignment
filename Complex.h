#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class Complex
{

friend ostream& operator<<(ostream &outStream, const Complex &comp);
friend istream& operator>>(istream &inStream, Complex &comp);

public:
Complex();

Complex(double real, double imag);

~Complex();

double getReal() const;

double getImag() const;

bool setValue(double real, double imag);

Complex operator+(const Complex &comp) const;

Complex& operator+=(const Complex &comp);

Complex operator*(const Complex &comp) const;

Complex& operator*=(const Complex &comp);

Complex operator-() const;

bool operator==(const Complex &comp) const;

bool operator!=(const Complex &comp) const;

private:
double real;
double imag;
};
#endif