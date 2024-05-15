#include <iostream>
#include "MyInteger.h"
using namespace std;

int main()
{
    MyInteger myint1(5);
    MyInteger myint2(4);
    cout << myint1.isEven() << endl;//0
    cout << myint1.isOdd() << endl;//1

    cout << MyInteger::isEven(4) << endl;//1
    cout << MyInteger::isOdd(4) << endl;//0

    cout << myint1.equals(5) << endl;//1
    cout << myint1.equals(myint2.getValue()) << endl;//0



}
