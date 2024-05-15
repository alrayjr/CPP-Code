#include "Car.h"
#include <string>
#include <iostream>
using namespace std;

Car::Car()
{
    brand= "Toyota";
    model= "Camry";
    color= "White";
    year= 2021;
    MPG= 5;
}

Car::Car(string _brand, string _model, string _color, int _year, double _MPG)
{
    brand = _brand;
    model = _model;
    color = _color;
    year = _year;
    MPG = _MPG;
}
void Car::display()
{
    cout << "The brand of the car is: " << brand << endl;
    cout << "The model of the car is: " << model<< endl;
    cout << "The color of the car is: " << color << endl;
    cout << "The year of the car is: " << year << endl;
    cout << "The MPG of the car is: " << MPG << endl;
}
