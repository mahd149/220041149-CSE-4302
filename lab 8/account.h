//account.h

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<iostream>
#include<string>
using namespace std;

class Account
{
    
    string AccName;
    float balance;
     string AccNo;

    public:
    Account( string name, float balance);

    string get_accname();
    float get_balance();
    string get_accno();

    void set_balance(float );
    void set_accname(string name);
    void set_accno(string num);
    void display();

};


#endif