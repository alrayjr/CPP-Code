#include <iostream>
using namespace std;

int sumOfEven(const int* arr, int size)
{
    int sum = 0;
    for(int i=0;i<size; i++)
    {
        if(i % 2 == 0)
        {
            sum = arr[i] + sum;
        }
    }
    cout <<"The sum of the values in even locations of array is " << sum ;
}

int main()
{
    int s = 5;

    int arr[s];

    cout << "Enter 5 integer numbers: " << endl;
    for (int i=0; i<s; i++)
    {
        cin >> arr[i];
    }
    sumOfEven(arr, s);
}
