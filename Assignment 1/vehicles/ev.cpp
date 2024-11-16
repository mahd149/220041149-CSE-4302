//ev.cpp

#include "ev.h"

int ev::total_evs = 0;

ev::ev(string lic, string manu, int carry, int cap, int time):
vehicle(lic, manu, carry), battery_cap(cap), charging_time(time)
{
    total_evs ++;
}

void ev::display()const{
    vehicle::display();
    cout<<"Battery capacity: "<<battery_cap<<" Kwh\n";
    cout<<"Charging Time: "<<charging_time<<" Minutes\n";

}

void ev::performMaintenance() const{
    cout<<"EV license: "<<license<<" in maintenance\n";
}

ev::~ev()
{
    total_evs--;
}

vehicle* ev::clone()const{
    return new ev(*this);
}