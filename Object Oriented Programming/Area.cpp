#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    //const datatype NAME = value
        // const NAMES are always UPPERCASE
    const double PI = 3.14;
    float radius ;
    float height ;
    double area ;
    //step 1:read in radius
    cout << "Enter the radius and height";
    cin >> radius;
    cin >> height;

    //step 2: Compute area
    area = 2 * PI * radius * height + 2 * PI * radius * radius;

    //step 3: display area
    cout << "This is the area ";
    cout << area << endl;
}

