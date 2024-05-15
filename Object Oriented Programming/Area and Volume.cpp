#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    //const datatype NAME = value
        // const NAMES are always UPPERCASE
    const double PI = 3.14;
    float radius;
    float height;
    double area;
    double volume;

    //step 1:read in radius
    cout << "Enter the radius of a cylinder ";
    cin >> radius;
    cout << "Enter the height of a cylinder ";
    cin >> height;

    //step 2: Compute area
    area = 2 * PI * radius * height + 2 * PI * radius * radius;
    volume = PI * radius * radius * height;

    //step 3: display area
    cout << "This is the area ";
    cout << area << endl;
    cout << "This is the volume ";
    cout << volume << endl;
}
