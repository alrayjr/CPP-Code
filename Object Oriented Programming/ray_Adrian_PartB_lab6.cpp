#include <iostream>
using namespace std;

string swapCase(const string& s)
{
    string hold = s;

int sl = hold.length();

    for(int i=0; i<sl; i++)
    {
        if (hold[i]>='a' && hold[i]<='z')
                hold[i] = hold[i] - 32;
        else if(hold[i]>='A' && hold[i]<='Z')
                hold[i] = hold[i] + 32;
    }
    cout << hold;
}

int main()
{
string word;
cout << "Enter a string: ";
getline(cin,word);

swapCase(word);
}
