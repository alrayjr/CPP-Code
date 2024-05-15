#include <iostream>
#include <math.h>
#include "Ray_Adrian_Prob5_Assignment3.h"

using namespace std;

    Rectangle2D::Rectangle2D()
    {
        x = 0;
        y = 0;
        width = 1;
        height= 1;
    }
    Rectangle2D::Rectangle2D(double x, double y, double width, double height)
    {
        this-> x = x;
        this-> y = y;
        this-> width = width;
        this-> height = height;
    }

    double Rectangle2D::getX() const
    {
        return x;
    }
    double Rectangle2D::getY() const
    {
        return y;
    }
    double Rectangle2D::getWidth() const
    {
        return width;
    }
    double Rectangle2D::getArea() const
    {
        return width * height;
    }
    double Rectangle2D::getPerimeter() const
    {
        return  (height * width) * 2;
    }


    bool Rectangle2D::contains(double _x, double _y) const
    {
        if (_x < x && _y < y)
            return true;
        else
            return false;
    }
    bool Rectangle2D::contains(const Rectangle2D &r) const
    {
        if (r.getWidth() < width)
            return true;
        else
            return false;
    }
    bool Rectangle2D::overlaps(const Rectangle2D &r) const
    {
        if(sqrt(pow(x-r.getX(),2) + pow(y-r.getY(),2))== 0)
            return true;
        else
            return false;
    }


