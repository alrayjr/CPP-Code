#include <iostream>

using namespace std;

int main()
{
    string pal;
    cout <<  "Enter a string with five lowercase letters: ";
    getline(cin, pal, '\n');

    if(pal.at(0)==pal.at(4) && pal.at(1)==pal.at(3))
        cout << pal << " is a palindrome!!!" << endl;
    else
        cout << pal << " is not a palindrome!!!" << endl;

}
