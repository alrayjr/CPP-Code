#include <iostream>
#include "Data Encapsulation.h"
using namespace std;

Circle::Circle()
{
    radius = 1;
}

Circle::Circle(double _radius)
{
    radius = _radius;
}

double Circle::area()
{
    return radius * radius * 3.14;
}

double Circle::getRadius()
{
    return radius;
}

void Circle::setRadius(double _radius)
{
        if(_radius >= 0)
        {
        radius = _radius;
        }
        else
        cout << "radius has to be positive"<< endl;
}
