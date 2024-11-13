#include <iostream>
#include <string>
#include "currentaccount.h"
using namespace std;

// Define static members
const float CurrentAccount::ServiceCharge = 100;
const int CurrentAccount::AccountPrefix = 100;
int CurrentAccount::nextaccount = 1;

CurrentAccount::CurrentAccount(string name, float balance) : Account(name, balance)
{
    string temp = std::to_string(AccountPrefix) + to_string(nextAccount());
    set_accno(temp);
}

int CurrentAccount::nextAccount()
{
    return nextaccount++;
}

void CurrentAccount::display()
{
    cout<<"\nCurrentaccount:\n";
    Account::display();
    cout <<"Service charge: "<< ServiceCharge<<"\n";
    cout<<"Balance: "<<get_balance()<<"\n\n";
    // cout << AccountPrefix;
}
