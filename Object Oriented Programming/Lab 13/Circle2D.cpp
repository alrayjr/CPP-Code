#include <iostream>
#include <math.h>
#include "Circle2D.h"

using namespace std;

    int Circle2D::numberOfCircles = 0;

    Circle2D::Circle2D()
    {
        x = 0;
        y = 0;
        radius = 1;
        numberOfCircles++;
    }
    Circle2D::Circle2D(double x, double y, double radius)
    {
        this-> x = x;
        this-> y = y;
        this-> radius = radius;
        numberOfCircles++;
    }
    Circle2D::Circle2D(const Circle2D & circle)
    {
        this-> x = circle.getX();
        this-> y = circle.getY();
        this-> radius = circle.getRadius();
        numberOfCircles++;
    }
    Circle2D::~Circle2D()
    {
        numberOfCircles--;
    }


    double Circle2D::getX() const
    {
        return x;
    }
    double Circle2D::getY() const
    {
        return y;
    }
    double Circle2D::getRadius() const
    {
        return radius;
    }
    int Circle2D::getNumberOfCircles()
    {
        return numberOfCircles;
    }

    double Circle2D::getArea() const
    {
        return 3.14 * radius * radius;
    }
    double Circle2D::getPerimeter() const
    {
        return 2 * 3.14 * radius;
    }


    bool Circle2D::contains(double _x, double _y) const
    {
        if (_x < x && _y < y)
            return true;
        else
            return false;
    }
    bool Circle2D::contains(const Circle2D& circle) const
    {
        if (circle.getRadius() < radius)
            return true;
        else
            return false;
    }
    bool Circle2D::overlaps(const Circle2D& circle) const
    {
        if(sqrt(pow(x-circle.getX(),2) + pow(y-circle.getY(),2))== 0)
            return true;
        else
            return false;
    }


