#include <iostream>
using namespace std;

void evenAndOddCount(int value);

    int even;
    int odd;
int main()
{
    int x;

    cout<< "Enter a number: ";
    cin >> x;
    evenAndOddCount(x);
    cout << "Evens: "<<even << endl;
    cout << "Odds: "<<odd << endl;
}

void evenAndOddCount(int value)
{
if (value == 0)
{

}
else
{


        int x = value % 10;

        if (x % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
       if (value >= 0)
       {
           evenAndOddCount(value/10);
       }

}
}
