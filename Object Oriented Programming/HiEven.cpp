// HiEven.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    int x;

    cout << "Enter a number ";
    cin >> x;

    if (x % 2 == 0 && x % 3 == 0) {
        cout << x << " is divisable by 2 and 3 " << endl;
    }
    
    
    else
        cout <<" you fucked up";

}
