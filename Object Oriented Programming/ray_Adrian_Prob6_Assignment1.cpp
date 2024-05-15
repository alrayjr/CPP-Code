#include <iostream>
using namespace std;

int main()
{
int x;
double sum;
int i;

cout << "Enter a number between 0 and 1000: ";
cin >> x;

    while (x > 0 )
    {
        i = x % 10;
        sum = sum + i;
        x = x/10;


    }
cout << "The sum of the digits is " << sum;

}
