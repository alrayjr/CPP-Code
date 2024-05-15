#include <iostream>
using namespace std;

template < typename T >
void Search(T * arr, int n, T x) {
bool test = false;
for (int i = 0; i < n; i++) {
    if (arr[i] == x) {
        cout << x << " is present in the array at position " << i << endl;
        test = true;
        break;
        }
    }
if (!test)
    cout << x << " is not present in the array"<< endl;
}

int main()
{
int a[] = {26,21,12,32,69};
double b[] = {36.3,24.2,20.6,420.1,13.1};
string c[] = { "Bork","Mike","Dawn","Bob","Litty"};

Search(a, sizeof(a) / sizeof(int), 69);
Search(b, (int) sizeof(b) / sizeof(double), 420.1);
string name = "Bork";
Search(c, (int) sizeof(c) / sizeof(string), name);
}
