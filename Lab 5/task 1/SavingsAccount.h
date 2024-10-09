#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include<string>
#include<iostream>

using namespace std;

class SavingsAccount{

    private:
        string Name;
        string Address;
        double AnnualInterestRate;
        double CurrentBalance;
        double minimumBalance;
            
    public:
        SavingsAccount();


        void setName(const string& ownername);
        void setAddress(const string& address);
        void setAnnIntRate(const double& rate);
        void setBalance(const double& balance);
        void deposit(double amount);
        void withdraw(double amount);

        string getName() const;
        string getAddress() const;
        int getAnnIntRate() const;
        double getBalance() const;

        double calculateInterest(int periodInMonth);
        void disburseInterest(int periodInMonth);

        // void EditBykey();

        // void generateRandomzInfo();

        // void showInterestAll(SavingsAccount arr[]);

        // void showAlphabetically(SavingsAccount arr[]);

        // ~SavingsAccount(){}







};



#endif