#include <iostream>
#include <string>
#include "SavingsAccount.h"

using namespace std;

SavingsAccount::SavingsAccount() {}
// SavingsAccount::~SavingsAccount(){}

void SavingsAccount::setName(const string &ownername)
{
    Name = ownername;
}

void SavingsAccount::setAddress(const string &address)
{
    Address = address;
}

void SavingsAccount::setAnnIntRate(const double &rate)
{
    AnnualInterestRate = rate;
}

void SavingsAccount::setBalance(const double &balance)
{
    CurrentBalance = balance;
}

void SavingsAccount::deposit(double amount)
{
    CurrentBalance += amount;
}

void SavingsAccount::withdraw(double amount)
{
    CurrentBalance -= amount;
}

string SavingsAccount::getName() const{
    return Name;
}
string SavingsAccount::getAddress() const{
    return Address;
}
int SavingsAccount::getAnnIntRate() const{
    return AnnualInterestRate;
}
double SavingsAccount::getBalance() const{
    return CurrentBalance;
}

double SavingsAccount::calculateInterest(int periodInMonth)
{
    int monthlyrate = AnnualInterestRate/12;
    double interest ;
    interest = (monthlyrate/100) * minimumBalance* periodInMonth;

    return interest;
}

void SavingsAccount::disburseInterest(int periodInMonth)
{
    double interest = calculateInterest(periodInMonth);

}