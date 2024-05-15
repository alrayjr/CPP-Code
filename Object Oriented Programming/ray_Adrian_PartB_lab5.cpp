#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
int rand1 = rand() % 100 + 1;
int guess = 1000;
while(rand1 != guess)
{
    cout << "guess the random number between 1-100" << endl;
    cin >> guess;
    if (guess == rand1)
    {
        cout << "correct"<< endl;
        break;
    }
    else if (guess > rand1)
    {
        cout << "too high"<< endl;
    }
    else if(guess < rand1)
    {
        cout<< "too low"<< endl;
    }
}


}
