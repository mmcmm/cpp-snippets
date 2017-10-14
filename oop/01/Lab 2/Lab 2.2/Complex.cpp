
#include <iostream>
#include "Complex.h"

using namespace std;

void Complex::init(double re, double im)
{
    this->re = re;
    this->im = im;
}

void Complex::print()
{
    cout << re << " " << im << endl;
}

void Complex::setRe(double re)
{
    this->re = re;
}

void Complex::setIm(double im)
{
    this->im = im;
}

Complex Complex::add(Complex c)
{
    Complex s;
    s.re = this->re + c.re;
    s.im = this->im + c.im;

    return s;
}