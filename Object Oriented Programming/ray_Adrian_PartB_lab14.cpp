#include <iostream>
using namespace std;

template <typename T >
void selectionSort(T a[], int n) {
for (int i = 0; i < n - 1; i++) {
    int min = i;
for (int j = i + 1; j < n; j++) {
if (a[j] < a[min])
    min = j;
    }

    swap(a[i], a[min]);
    }
}
template <typename T >
void swap(T & e1, T & e2) {
    cout << e1 << ": " << e2;
    T temp = e1;
    e1 = e2;
    e2 = temp;
}

template <typename T >
void displayArray(T * arr, int n) {
for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
    }
int main() {
int a[] = {26,21,12,32,69};
double b[] = {36.3,24.2,20.6,420.1,13.1};
string c[] = { "Bork","Mike","Dawn","Bob","Litty"};

selectionSort(a, sizeof(a) / sizeof(int));
selectionSort(b, sizeof(b) / sizeof(double));
selectionSort(c, sizeof(c) / sizeof(string));

cout << "Integer Array after sorting" << endl;
displayArray(a, sizeof(a) / sizeof(int));
cout << "Double Array after sorting" << endl;
displayArray(b, sizeof(b) / sizeof(double));
cout << "String Array after sorting" << endl;
displayArray(c, sizeof(c) / sizeof(string));
}
