#include <iostream>
using namespace std;
int main()
{
    float distance;
    float MPG;
    float gallon;
cout << "Enter the driving distance: " << endl;
cin >> distance;
cout << "Enter the MPG: " << endl;
cin >> MPG;
cout << "Enter price per gallon: " << endl;
cin >> gallon;
float cost = distance/MPG*gallon;
cout << "The cost of driving is " << cost << endl;
return 0;
}
