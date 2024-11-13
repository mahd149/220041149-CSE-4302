//loanaccount.h


#ifndef LOAN_H
#define LOAN_H

#include<iostream>
#include<string>
#include "account.h"
using namespace std;

class loanAccount: public Account
{
    float interestRate;
    static const int AccountPrefix;
    float monthlyDepositAmount;
    static int nextaccount;

    int nextAccount();
    public:
    loanAccount(string name,  float balance,float interestR, float monthly);

    void display();
  
};


#endif
