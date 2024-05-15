#include <iostream>
using namespace std;

int reverse(int x)
{
int rev=0, rem; //reverses inputed number
    while(x!=0)
  {


     rem=x%10;
     rev=rev*10+rem;
     x/=10;
  }
  return rev;
}
int main ()// asks for number
{
    int x;
    cout << "gimme a number ";
    cin >> x;
    cout << reverse(x); //displays reversed number
}
