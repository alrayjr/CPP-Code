#include <iostream>
using namespace std;

int main()
{
    int x;
    int max;
    int count = 1;
    cout << "Gimme Numbers: ";
    cin >> x;

    max = x%10;
    x = x/10;

    while(x != 0)
    {
        if(max < x%10)
        {
            max = x%10;
            count = 1;
            x = x/10;

        }
        else if(max > x%10)
        {
            x = x/10;
        }
        else if(max = x%10)
        {
            count++;
            x = x/10;
        }

    }
    cout << "Largest number: " << max << endl;
    cout << "it occurred " << count <<" times" << endl;
}
