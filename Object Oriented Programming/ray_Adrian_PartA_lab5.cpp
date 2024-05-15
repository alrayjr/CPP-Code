#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        double feet = 3.280;
        int meters = 1;
cout << "METERS    FEET" << endl;
cout <<fixed <<setprecision(3) <<meters << "         " << feet << endl;

 for(int i = 2; i <= 15; i++)
 {
     cout << fixed << setprecision(3) << meters*i << "          " << feet*i << endl;
 }

}
