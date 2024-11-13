//savingsaccount.h
#ifndef SAVINGS_H
#define SAVINGS_H

#include<iostream>
#include<string>
#include "account.h"
using namespace std;

class SavingsAccount: public Account
{
    float interestRate;
    static const int AccountPrefix;
    float monthlyDepositAmount;
    static int nextaccount;

    int nextAccount();
    public:
    SavingsAccount(string name,  float balance,float interestR, float montly);

    void display();
  
};


#endif
