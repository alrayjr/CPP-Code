#include <iostream>
#include <string.h>
using namespace std;

int count(const string& s, char a)
{
    int counter = 0;
    int len = s.length();
    int i = 0;
    while(i != len)
    {
    if(s[i] == a)
    {
        counter++;
        i++;

    }
    else
    {
        i++;

    }
    }
    cout<< counter;
}

int main()
{
    char let;
    string s;
    cout << "Please enter a string: ";
    getline(cin,s);
    cout << "Please enter a character: ";
    cin >> let;

    count(s, let);

}
