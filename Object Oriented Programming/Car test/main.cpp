#include <iostream>
#include "Car.h"
#include <string>
using namespace std;

int main()
{
    Car car1;

    Car car2("BMW","3", "Red", 2018, 8.4);

    car1.display();

    cout << endl;

    car2.display();
}
