#include <iostream>
using namespace std;

int main()
{
    cout << "x\t"<< "x-2\t" << "x-4\t"<< endl;
    for(int x=10; x<=25; x+=5)
    {
        cout << x <<'\t'<< x-2 << '\t' << x-4 << endl;
    }
}
