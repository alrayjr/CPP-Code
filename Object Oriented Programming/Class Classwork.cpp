#include <iostream>
#include <string>
using namespace std;

class Account {

public:
    int id;
    double balance;
    double annualInterestRate;
    Account(){
    id = 0;
    balance = 0;
    annualInterestRate = 0;
    }

    void setId(int id);
    int getId(){
        return id;
    }

    void setBalance(double balance);
    int getBalance(){
        return balance;
    }

    void setAnnualInterestRate(double annualInterestRate);
    int getAnnualInterestRate(){
        return annualInterestRate;
    }



double earnedAmount(void){

    return balance * annualInterestRate;
}

int printAccountInfo(void){
    cout << "id is " << id << "Balance is " << balance << "Annual Interest Rate is " << annualInterestRate << "Earned Amount is " << earnedAmount << endl;
    //cout << "Balance is " << balance << endl;
    //cout << "Annual Interest Rate is " << annualInterestRate << endl;
    //cout << "Earned Amount is " << earnedAmount << endl;
}

int withdraw(double amount){
    if(amount<=balance){
        balance = amount-balance;
    } else {
        cout << "Withdraw less";
    }
}

int deposit(double amount){
    balance = balance + amount;
}

};

int main() {
// this is as far as i could get
}
