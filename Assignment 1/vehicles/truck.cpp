//truck.cpp
#include "truck.h"

int truck::total_trucks = 0;

truck::truck(string lic, string manu, int carry, int cap, string type, int carry_cap):
vehicle(lic, manu, carry),
gasoline(lic, manu, carry,cap, type), carry_cap(carry_cap) { total_trucks++; }


void truck::display() const{
    cout<<"Truck: \n";
    // vehicle::display();
    gasoline::display();
    cout<<"Carry Capacity: "<<carry_cap<<" Kgs\n";
}

void truck::performMaintenance()const{
    cout<<"truck license: "<<license<<" maintenance\n";
}

vehicle* truck::clone() const
{
    return new truck(*this);//copy constructors
}

truck::~truck()
{
    total_trucks--;
}