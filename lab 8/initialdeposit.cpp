//initialdeposit.cpp
#include <iostream>
#include <string>

#include "initialdeposit.h"


using namespace std;

InitialaDepositMDS::InitialaDepositMDS(string name,  float balance,float interestR, float monthly, float max, float init) : MDS( name,   balance, interestR,  monthly)
    
{
    MaxInterest = max;
    InitDeposit = init;
}
