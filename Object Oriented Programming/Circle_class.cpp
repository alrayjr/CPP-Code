#include <iostream>
#include <string>
using namespace std;

class Circle
{
public:
    double radius;

    //constructors never return anything they are always void but you do not need to write it

    Circle()// no argument/default constructor, constructor is always name of class
    {

     radius = 1; // new class radius will start with 1.

    }
    //user defined constructor
    Circle(double _radius)// underscore means its coming form main function, used to distinguish
    {
        /*this->*/radius = _radius;// sets radius defined outside of class to radius inside class
            //can say this-> to point to the radius of this object but you don't have to
    }

    double area()// reminder :functions when called in main need ()
    {
        return radius * radius * 3.14;
    }
    void print()
    {
        cout << "The radius is " << radius <<endl;
        cout << "The area is " << area() << endl;
    }


};

int main()
{
    Circle cir1;// new object from no argument constructor
    cout << "The radius of cir1 is " << cir1.radius << endl;
    cout << "The area of cir1 is " << cir1.area() << endl;

    Circle cir2(3.2);//new object from user defined constructor
    cir2.print();// using print function instead of manual print
}

