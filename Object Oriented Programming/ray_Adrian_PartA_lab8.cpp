#include <iostream>
using namespace std;

double min(double array[], int size)
{
    double min = 100;
    for(int i=0;i<size; i++)
    {
    if(array[i] < min)
        {
        min = array[i];
        i++;
        }
    }
    cout << "The minimum number is " << min;
}

int main()
{
    int size = 10;
    double arr[10];
    cout << "Enter ten numbers: " << endl;
    for (int i=0; i<10; i++)
    {
        cin >> arr[i];
    }
    min(arr,size);
}
