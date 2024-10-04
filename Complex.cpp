#include "Complex.h"

// 
// Created by
// Billy Kim
// Alan Talavera-Cordova
// Dylan Vp
// Seyeon Park
// Abdullahi Mohamed


Complex::Complex()
{
    real = 0;
    imag = 0;
}

Complex::Complex(double realNum, double imagNum)
{
    real = realNum;
    imag = imagNum;
}

Complex::~Complex()
{

}

double Complex::getReal() const
{
    return real;
}

double Complex::getImag() const
{
    return imag;
}

bool Complex::setValue(double realNum, double imagNum)
{
    real = realNum;
    imag = imagNum;

    return true;
}

Complex Complex::operator+(const Complex &comp) const
{
    Complex result = *this;
    result += comp;
    return result;
}

Complex& Complex::operator+=(const Complex &comp)
{
    real = real + comp.real;
    imag = imag + comp.imag;

    return *this;
}

Complex Complex::operator*(const Complex &comp) const
{
    Complex result = *this;
    result *= comp;
    return result;
}

Complex& Complex::operator*=(const Complex &comp)
{
    double oldReal = real;
    real = (oldReal * comp.real - imag * comp.imag);
    imag = (oldReal * comp.imag + imag * comp.real);
    
    return *this;
}

Complex Complex::operator-() const
{
    Complex temp;
    temp.real = -real;
    temp.imag = -imag;
    return temp;
}

bool Complex::operator==(const Complex &comp) const
{
    return((real == comp.real) && (imag == comp.imag));
}

bool Complex::operator!=(const Complex &comp) const
{
    return !(*this==comp);
}

ostream& operator<<(ostream &outStream, const Complex &comp)
{
    outStream << "(" << comp.real << ", " << comp.imag << ")";
    
    return outStream;
}

istream& operator>>(istream &inStream, Complex &comp)
{
    inStream >> comp.real >> comp.imag;

    return inStream;
}