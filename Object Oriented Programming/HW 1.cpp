#include <iostream>
using namespace std;

int gcd(int a, int b);

int main() {
   int a ;
   int b ;
   cout<<"Gimme two numbers" << endl;
   cin>> a;
   cin>> b;
   cout<<"The GCD of "<< a <<" and "<< b <<" is "<< gcd(a, b);
   return 0;
}
int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
