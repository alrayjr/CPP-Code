#include <iostream>
using namespace std;

bool isEvenDigits(int number)
{
    int counter = 0; // counts number of digits
    while (number)
    {
        number = number / 10;
        counter++;
    }
    if (counter % 2 == 0) { //if number of digits is even than true if not false
        return true;
    }
    else {
        return false;
    }
}


int main()
{
	int x;
	cout << "give me a number "; // asks for number
    cin >> x;

    if (isEvenDigits(x)) {  // if isEvenDigits is true its even
        cout << "its an even number of digits";
    }
    else
    {
        cout << "its an odd number of digits"; // if isEvenDigits is false its odd
    }

}
