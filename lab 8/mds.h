//mds.h
#ifndef MDS_H
#define MDS_H

#include<iostream>
#include<string>
#include "account.h"
using namespace std;

class MDS: public Account
{
    float interestRate;
    static const int AccountPrefix;
    float monthlyDepositAmount;
    static int nextaccount;

    int nextAccount();
    public:
    MDS(string name,  float balance,float interestR, float monthly);

    void display();

  
};


#endif
