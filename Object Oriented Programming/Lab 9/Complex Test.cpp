#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex com1;
    com1.setReal(2.4);
    com1.setImg(4.1);

    Complex com2(3.2, 3.6);
    cout << "The sum of (" << com1.getReal() << " + " << com1.getImg() << "i)  + ";
    cout << "("<< com2.getReal() << " + " << com2.getImg() << ") = ";
    com2.addition(com1);
    cout << "("<< com2.getReal() << " + " << com2.getImg() << "i)";

}
