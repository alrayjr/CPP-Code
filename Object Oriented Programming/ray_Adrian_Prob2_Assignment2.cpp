#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    srand(time(0));
    int point;
    int dice1 = rand() % 6 + 1;
    int dice2 = rand() % 6 + 1;
    int sum = dice1 + dice2;
    cout << "You rolled " << dice1 << " + " << dice2 << " = " << sum << endl;
    if(sum == 2|| sum == 3 || sum == 12)
    {
        cout << "You lose" << endl;
    }
    else if(sum == 7 || sum == 11)
    {
        cout << "You win" << endl;
    }
    else
    {
        cout << "Point is " << sum << endl;
        point = sum;
    int dice3 = rand() % 6 + 1;
    int dice4 = rand() % 6 + 1;
    int sum2 = dice3 + dice4;
    cout << "You rolled " << dice3 << " + " << dice4 << " = " << sum2 << endl;
    if (sum2 == point)
    {
        cout << "You win" << endl;
    }
    else
    {
        cout << "You win" << endl;
    }


    }


}
