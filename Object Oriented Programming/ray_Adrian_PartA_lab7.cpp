#include <iostream>
using namespace std;

double series(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return 1.0/(n*n) + series(n-1);
    }
}

int main()
{
    int x =15;
cout << "n      Results" << endl;
while(x<=15)
{
        cout <<"n=" << x << "  "<< series(x) << endl;
        x--;
}

}
