#include <iostream>

using namespace std;

int main()
{
    int num1,num2,num3;
cout << "Enter 3 integers " << endl;
cin >> num1;
cin >> num2;
cin >> num3;

if( num1< num2 && num1<num3 && num2> num3 )
    cout << num1 << num3 << num2 << endl;
else if( num1< num2 && num1<num3 && num2< num3 )
    cout << num1 << num2 << num3 << endl;
else if( num2< num1 && num2<num3 && num1> num3 )
    cout << num2 << num3 << num1 << endl;
else if( num2< num1 && num2<num3 && num1< num3 )
    cout << num2 << num1 << num3 << endl;
else if( num3< num2 && num3<num1 && num2> num1 )
    cout << num3 << num1 << num2 << endl;
else if( num3< num2 && num3<num1 && num2< num1 )
    cout << num3 << num2 << num1 << endl;

}
