//currentaccount.h

#ifndef CURRENT_H
#define CURRENT_H

#include <iostream>
#include <string>
#include "account.h"
using namespace std;
// class Account;
class CurrentAccount : public Account
{
   static const float ServiceCharge;
   static const int AccountPrefix ;
   static int nextaccount;

   int nextAccount();

public:
   CurrentAccount(string name, float balance);
   void display();
};

#endif
