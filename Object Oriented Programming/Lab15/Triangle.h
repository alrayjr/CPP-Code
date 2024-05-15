#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED

#include "GeometricObject.h"
#include <math.h>
using namespace std;

class Triangle : public GeometricObject
{
public:
    Triangle();
    Triangle(double _side1,double _side2,double _side3);
    Triangle(double _side1,double _side2,double _side3, const string &_color, bool _filled);


    void setSide1(double _side1);
    void setSide2(double _side2);
    void setSide3(double _side3);

    double getSide1() const;
    double getSide2() const;
    double getSide3() const;

    double getArea() const;
    double getPerimeter() const;

    bool operator <(Triangle & T1);
    bool operator >=(Triangle & T2);
    bool operator !=(Triangle & T3);



private:
    double side1;
    double side2;
    double side3;
};


#endif // TRIANGLE_H_INCLUDED
