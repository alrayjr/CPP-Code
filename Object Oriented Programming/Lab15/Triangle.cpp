#include "Triangle.h"


using namespace std;

Triangle::Triangle()
{
    setSide1(1.0);
    setSide2(1.0);
    setSide3(1.0);
}
Triangle::Triangle(double _side1,double _side2,double _side3)
{
    setSide1(_side1);
    setSide2(_side2);
    setSide3(_side3);
}
Triangle::Triangle(double _side1,double _side2,double _side3, const string &_color, bool _filled)
{
    setSide1(_side1);
    setSide2(_side2);
    setSide3(_side3);
    setColor(_color);
    setFilled(_filled);
}


void Triangle::setSide1(double _side1)
{
    side1 = _side1;
}
void Triangle::setSide2(double _side2)
{
    side2 = _side2;
}
void Triangle::setSide3(double _side3)
{
    side3 = _side3;
}

double Triangle::getSide1() const
{
    return side1;
}
double Triangle::getSide2() const
{
    return side2;
}
double Triangle::getSide3() const
{
    return side3;
}


double Triangle::getArea() const
{
    return sqrt(getPerimeter()/2*((getPerimeter()/2-side1)*(getPerimeter()/2-side2)*(getPerimeter()/2-side3)));
}
double Triangle::getPerimeter() const
{
    return side1 + side2 + side3;
}


bool Triangle::operator <(Triangle & T1)
{
    if (getArea() < T1.getArea())
        return true;
    else
        return false;
}
bool Triangle::operator >=(Triangle & T1)
{
        if (getArea() >= T1.getArea())
        return true;
    else
        return false;
}
bool Triangle::operator !=(Triangle & T1)
{
        if (getArea() != T1.getArea())
        return true;
    else
        return false;
}
