#include <iostream>
#include "Complex.h"
using namespace std;

Complex::Complex()
{
    real = 0;
    img = 1;
}

Complex::Complex(double _real, double _img)
{
    real = _real;
    img = _img;
}

double Complex::getReal()
{
    return real;
}

double Complex::getImg()
{
    return img;
}

void Complex::setImg(double _img)
{
    img = _img;
}

void Complex::setReal(double _real)
{
    real = _real;
}

Complex::addition(Complex &comp)
{
    real=comp.getReal() + real;
    img =comp.getImg() + img;

}

