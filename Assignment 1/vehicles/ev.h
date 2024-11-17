//ev.h
//not abstract 

#ifndef EV_H
#define EV_H
#include<iostream>
#include<string>
#include "vehicle.h"

using namespace std;


class ev : virtual public vehicle
{
    protected:
        int battery_cap;
        int charging_time;
        static int total_evs;

    public:
        ev(string lic, string manu, int carry, int cap, int time);
        void display()const override;
        void performMaintenance() const override;
        vehicle* clone() const override;

        static int get_total_ev() { return total_evs;}
        ~ev();
};




#endif