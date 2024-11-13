//fiveyearmds.cpp
#include <iostream>
#include <string>

#include "fiveyearmds.h"


using namespace std;

FiveYearMDS::FiveYearMDS(string name, float balance, float interestR, float monthly, float max) : MDS(name, balance, interestR, monthly)
{
    MaxInterest = max;
}
