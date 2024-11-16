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
    private:
        int battery_cap;
        int charging_time;
        static int total_evs;

    public:
        ev(string lic, string manu, int carry, int cap, int time);
        void display()const;
        void performMaintenance() const;
        vehicle* clone() const;

        static int get_total_ev() { return total_evs;}
        ~ev();
};




#endif