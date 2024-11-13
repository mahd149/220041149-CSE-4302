//mds.cpp

#include<iostream>
#include<string>

#include "mds.h"
using namespace std;

const int MDS::AccountPrefix = 300;

int MDS::nextaccount = 1;

MDS::MDS(string name,  float balance,float interestR, float monthly): Account(name, balance)

{
    string temp = std::to_string(AccountPrefix) + to_string( nextAccount());
    set_accno(temp);

    interestRate = interestR;
    monthlyDepositAmount = monthly;
}

int MDS::nextAccount()
{
    return nextaccount+=3;
}


void MDS::display()

    {
        cout<<"\n\nMDS account:\n";
        Account::display();
        cout<<"Interest rate: "<<interestRate<<endl;
        cout<<"Monthly deposit amount: "<<monthlyDepositAmount<<endl;
      
        cout<<"Balance: "<<get_balance()<<"\n\n";

    }
