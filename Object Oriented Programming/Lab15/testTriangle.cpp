#include <iostream>

#include "GeometricObject.h"
#include "Triangle.h"

using namespace std;

int main()
{
double x;
double y;
double z;
string color;
bool fill;

cout << "Enter the 3 lengths of your triangles sides?" << endl;

cout <<  "Side 1 = " ;
cin >> x;

cout <<  "Side 2 = " ;
cin >> y;

cout <<  "Side 3 = " ;
cin >> z;

cout << "What Color is this Triangle?" << endl;

cout<< "Color = ";
cin.ignore();
getline (cin,color);

cout << "Is it filled? (1 = Yes, 0 = No)" << endl;
cin >> fill;


Triangle T1(x,y,z,color,fill);

cout << "Your Triangle Specs:" << endl;
cout <<"Area = " << T1.getArea() << endl;
cout <<"Perimeter = " << T1.getPerimeter() << endl;
cout <<"Color = " << T1.getColor() << endl;
cout <<"Filled? " << T1.getFilled() << endl;
cout << endl;


Triangle T2;

cout << "Is your triangle smaller than a default one?" << endl;
    if (T1 < T2)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

cout << "Is your triangle greater than or equal to a default one?" << endl;
    if (T1 >= T2)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
cout << "Is your triangle NOT equal to a default one?" << endl;
    if (T1 != T2)
        cout << "yes" << endl;
    else
        cout << "no" << endl;


}


