#include <iostream>
using namespace std;

int getType(int n)
{
    int sum;
    while (n != 0 )
    {
        int i = n % 10;
        sum = sum + i;
        n = n/10;

    }

     if(sum % 2 == 0)
     {
         cout << "It is an even digit integer" << endl;
     }
     else
        cout << "It is an odd digit integer" << endl;

}

int main()
{
    int x;
    cout << "please enter an integer: ";
    cin >> x;
    getType(x);
}
