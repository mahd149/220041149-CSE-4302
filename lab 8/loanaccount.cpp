// loanaccount.cpp
#include <iostream>
#include <string>

#include "loanaccount.h"
using namespace std;

const int loanAccount::AccountPrefix = 900;
int loanAccount::nextaccount = 1;


loanAccount::loanAccount(string name, float balance , float interestR, float monthly) : Account(name, balance)
{
    string temp = std::to_string(AccountPrefix) + to_string(nextAccount());
    set_accno(temp);
    interestRate = interestR;
    monthlyDepositAmount = monthly;
}

int loanAccount::nextAccount()
{
    return nextaccount++;
}

void loanAccount::display()

{
    cout<<"Loan account:\n";
    Account::display();
    cout << "Interest rate: " << interestRate << endl;
    cout << "Monthly deposit amount: " << monthlyDepositAmount << endl;
   
}