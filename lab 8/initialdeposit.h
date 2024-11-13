//initialdeposit.h
#ifndef INITDEPO_H
#define INITDEPO_H

#include<iostream>
#include<string>

#include "mds.h"
using namespace std;

class InitialaDepositMDS: public MDS
{
    float MaxInterest;
    float InitDeposit;
    public:

    InitialaDepositMDS(string name,  float balance,float interestR, float monthly, float max, float init) ;
    
    
};
#endif