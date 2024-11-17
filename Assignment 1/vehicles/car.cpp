//car.cpp
#include "car.h"

int car::total_cars = 0;

car::car(string lic, string manu, int carry, int cap, string type, int pass) :
vehicle(lic, manu, carry),//as gasoline inherits vehicle virtually
gasoline(lic, manu, carry, cap, type),
passenger(pass) { total_cars++;}


void car::display() const
{
    cout<<"Car: \n";
    // vehicle::display();
    gasoline::display();
    cout<<"Passenger capacity: "<<passenger<<endl;
}

void car::performMaintenance()const{
    cout<<"Car license: "<<license<<" maintenance\n";
}

vehicle* car::clone()const{
    return new car(*this);
}


car::~car()
{
    total_cars--;
}
