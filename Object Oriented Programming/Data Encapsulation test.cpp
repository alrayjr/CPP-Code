#include <iostream>
#include "Data Encapsulation.h"

using namespace std;

int main()
{
    Circle cir1;
    cir1.setRadius(2.6);

    cout << cir1.getRadius() << endl;

    Circle cir2(6.3);
    cout << cir2.area() << endl;

}
