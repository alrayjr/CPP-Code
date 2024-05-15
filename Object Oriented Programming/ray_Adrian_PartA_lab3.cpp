#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
int rand1 = rand() % 10+1;
int rand2 = rand() % 10+1;

cout << "first random number is " << rand1 << endl;
cout << "second random number is " << rand2 << endl;
if (rand1 % rand2 == 0)
    cout << rand1 << " is divisible by " << rand2 << endl;
else
    cout << rand1 << " is not divisible by " << rand2 << endl;
}
