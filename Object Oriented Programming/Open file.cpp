#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main()
{
// open file stream
ofstream test; //declare output

//open file
test.open("number.txt");

test << 54 << " "<< 21 << " " << 69;

//close file
test.close();



//input file stream
ifstream input;

input.open("number.txt");

int num1, num2, num3;

input >> num1;
input >> num2;
input >> num3;

cout << "Sum of numbers = " << num1+num2+num3;

input.close();
}
