#ifndef CAR_H
#define CAR_H

#include<string>
using namespace std;

class Car
{
public:
    string brand, color, model;
    int year;
    double MPG;

    //no arg constructor
    Car();

    //user def function
    Car(string,string,string,int,double);

    void display();
};



#endif // CAR_H
