//bike.cpp

#include "bike.h"

int bike::total_bike = 0;

bike :: bike(string lic, string manu, int carry, int cap, string type):
vehicle(lic, manu, carry),
gasoline(lic, manu, carry, cap, type) { total_bike++; }

void bike::display() const
{
    cout<<"Bike: \n";
    // vehicle::display();
    gasoline::display();
}

void bike::performMaintenance() const
{
    cout<<"Bike license: "<<license<<" maintenance\n";
}

vehicle* bike::clone() const{
    return new bike(*this);
}

bike::~bike()
{
    total_bike--;
}