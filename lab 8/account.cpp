//account.cpp

#include "account.h"
#include <iostream>
#include <string>

using namespace std;

Account::Account(string name, float balance) : AccName(name), balance(balance) {}

string Account::get_accname()
{
    return AccName;
}
float Account::get_balance()
{
    return balance;

}
string Account::get_accno()
{
    return AccNo;

}

void Account::set_balance(float bal)
{
    if(bal >= 0)
    balance = bal;    

}
void Account::set_accname(string name)
{ 
    AccName = name;

}
void Account::set_accno(string num)
{
    AccNo = num;

}

void Account::display()
{
    cout<<"Account Name: "<< get_accname()<<endl;
    cout<<"Account No: "<< get_accno()<<endl;

}