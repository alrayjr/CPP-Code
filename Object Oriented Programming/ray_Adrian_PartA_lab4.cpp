#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double size;
    double area;
    cout << "Enter length of hexagon side: ";
    cin >> size;

    area = (6*pow(size,2))/(4*tan(3.14/6));

    cout << setprecision(4) <<"The area is: " << area;

}
