#ifndef DATA_ENCAPSULATION_H_INCLUDED
#define DATA_ENCAPSULATION_H_INCLUDED

class Circle
{
public:
    Circle();

    Circle(double _radius);

    double area();

    void setRadius(double _radius);

    double getRadius();


private:

    double radius;
};



#endif // DATA_ENCAPSULATION_H_INCLUDED
