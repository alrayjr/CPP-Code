#include <iostream>

using namespace std;


int Power(int base, int exponent)
{
    if (exponent == 0)
        return 1;
    else
        return(base*Power(base,exponent-1));
}
int crazySum(int n)
{
    if (n == 1)
        return 1;
    else
        return (crazySum(n-1) + Power(n,n));
}

int main()
{
cout << crazySum(3);

}
