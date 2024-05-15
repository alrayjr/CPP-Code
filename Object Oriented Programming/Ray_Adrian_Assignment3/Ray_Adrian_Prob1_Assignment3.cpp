#include <iostream>
using namespace std;
template<typename T>
T small(T arr[],int size) //function to find min
{
T min=arr[0] ;//assuming that the user enters 100000 as the max number
for(int i=1;i<size;i++)
{
if(arr[i]<min)
{
min=arr[i];
}
}
return min;
}

int main()
{

int size;
cout<<"Enter the array size: ";
cin>>size;
int arr[size];
cout<<"Enter the array: ";
for(int i=0;i<size;i++)
{
cin>>arr[i];
}
int x=small(arr,size);
cout<<"The smallest is: "<<x;

}
