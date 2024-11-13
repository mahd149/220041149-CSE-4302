//fiveyearmds.h
#ifndef FIVEMDS_H
#define FIVEMDS_H

#include<iostream>
#include<string>

#include "mds.h"
using namespace std;

class FiveYearMDS: public MDS
{
    float MaxInterest;

    public:
    FiveYearMDS(string name,  float balance,float interestR, float monthly, float max) ;

    
    
};
#endif