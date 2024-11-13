//twoyearmds.h

#ifndef TWOMDS_H
#define TWOMDS_H

#include<iostream>
#include<string>

#include "mds.h"
using namespace std;

class TwoYearMDS: public MDS
{
    float MaxInterest;

    public:
    TwoYearMDS(string name,  float balance,float interestR, float monthly, float max) ;

    
    
};
#endif