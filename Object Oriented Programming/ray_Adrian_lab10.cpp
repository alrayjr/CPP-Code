#include <iostream>

using namespace std;

class Account
{
public:
    int id;
    double balance;
    double annualIntrestRate;

    Account()
    {
        id = 0;
        balance = 0;
        annualIntrestRate = 0;
    }
    Account(int _id, double _balance, double _annualIntrestRate)
    {
        id = _id ;
        balance = _balance;
        annualIntrestRate = _annualIntrestRate;
    }
    double getMonthlyIntrestRate()
    {
        return annualIntrestRate/12;
    }
    void withdraw(double amount)
    {
         balance = balance - amount;

    }
    void deposit(double amount)
    {
        balance = balance + amount;
    }

};

int main()
{
    Account ac1(1122,20000,4.5);
    ac1.withdraw(2500);
    ac1.deposit(3000);
    cout << "The balance for the account is " << ac1.balance << endl;
    cout << "The monthly interest rate is " << ac1.getMonthlyIntrestRate() << endl;
}
