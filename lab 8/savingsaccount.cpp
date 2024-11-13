//savingsaccount.cpp
#include<iostream>
#include<string>

#include "savingsaccount.h"
using namespace std;


 const int SavingsAccount::AccountPrefix = 200;

 int SavingsAccount::nextaccount = 1;

SavingsAccount::SavingsAccount(string name,  float balance,float interestR, float montly): Account(name, balance), monthlyDepositAmount(montly)
{
    string temp = std::to_string(AccountPrefix) + to_string( nextAccount());
    set_accno(temp);
    interestRate = interestR;
}

int SavingsAccount::nextAccount()
{
    return nextaccount++;
}


void SavingsAccount:: display()
    {
        cout<<"\n\nSavings account:\n";
       Account::display();
        cout<<"Interest rate: "<<interestRate<<endl;
        cout<<"Monthly deposit amount: "<<monthlyDepositAmount<<endl;
        
        cout<<"Balance: "<<get_balance()<<"\n\n";

    }
