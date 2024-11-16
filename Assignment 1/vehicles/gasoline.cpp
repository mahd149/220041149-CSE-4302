//gasoline.cpp

#include "gasoline.h"

int gasoline::total_gases =0;

gasoline::gasoline(string lic, string manu, int carry, int cap, string type):
vehicle(lic, manu, carry), tank_cap(cap), fuel_type(type) { total_gases++; }

gasoline::~gasoline() { total_gases--;}

void gasoline::display() const
{
    vehicle::display();
    cout<<"Tank capacity: "<<tank_cap<<endl;
    cout<<"Fuel Type: "<<fuel_type<<endl;
}