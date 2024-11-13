//twoyearmds.cpp

#include <iostream>
#include <string>

#include "twoyearmds.h"


using namespace std;

TwoYearMDS::TwoYearMDS(string name, float balance, float interestR, float monthly, float max) : MDS(name, balance, interestR, monthly)
{
    MaxInterest = max;
}
