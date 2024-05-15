#include <iostream>

using namespace std;

class Rectangle
{
public:
    double height;
    double width;


    Rectangle()
    {
    height = 1;
    width = 1;
    }

    Rectangle(double _height, double _width)//
    {
    height = _height;
    width = _width;
    }

    double area()
    {
       return height * width;
    }
    double perimeter()
    {
        return 2 * (height + width);
    }
    void print()
    {
        cout << "area is " << area()<< endl;
        cout << "perimeter is " << perimeter() << endl;
        cout <<endl;
    }

};

int main()
{
Rectangle rec1;
rec1.height = 7.2;
rec1.width = 3.1;

Rectangle rec2(3.2,5.2);
rec1.print();
rec2.print();


}

