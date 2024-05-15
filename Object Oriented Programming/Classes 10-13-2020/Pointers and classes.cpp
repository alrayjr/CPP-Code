#include <iostream>
using namespace std;

void swap(int *pA, int *pB) {
    int c = *pA;
    *pA = *pB;
    *pB = c;
}


int main() {
   int* pA = nullptr;
   cout << *pA << endl;






    /* int a = 5;
    int b = -5;
    swap(&a, &b);
    cout << "The a is "<< a << endl << "The b is " << b << endl;

    int a = 5;
    int b = -5;
    int* pA = &a;
    int* pB = &b;
    cout << "The address if the a is " << pA << endl;
    cout << "The value if the a is " << *pA << endl;
    */
}
