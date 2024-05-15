#include <iostream>
using namespace std;
const unsigned int SIZE = 5;

int* foo() {
	int a = 0;
	return &a;
}

//function that will double the elements in the array
int* doubleArray(int* arr, int size);//(prototype)
int* doubleNewArray(int* arr, int size);

//double capacity 
int* doubleCapacity(int* arr, int size);

void PrintArray(const int* array, int size);
void PrintArray(const int array[], int size);


int main()
{
	int array[SIZE] = { 1,2,3,4,5};

	int* pArray = doubleCapacity(array, SIZE);
	

	for (int i = 0; i < SIZE; i++)
	{
		cout << pArray[i] << ' ';
		
	}

	/*cout << array << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << array[i] << ' ';

	}

	cout << endl << "Printing with pointers" << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cout << *(pArray + i) << ' ';
	}*/
	return 0;
}

	int* doubleArray(int* arr, int size){
		for (int i = 0; i < size; i++)
		{
			// arr[i] * 2; //both lines do same thing
			*(arr + i) = *(arr + i) * 2;
		}
		return arr;
}

	int* doubleNewArray(int* arr, int size)
	{
		int newArray[SIZE];
		int* pNewArray = new int[size];

		for (int i = 0; i < SIZE; i++)
		{
			*(pNewArray + i) = arr[i] * 2; 
			//cout << newArray[i] << ' ';
		}

		return pNewArray;
	}

	int* doubleCapacity(int* arr, int size)
	{
		int doubledSize = SIZE * 2;
		for () 
		{
			
		}
		return arr;
	}