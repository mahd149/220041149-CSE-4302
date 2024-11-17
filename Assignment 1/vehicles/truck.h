#ifndef TRUCK_H
#define TRUCK_H


#include<iostream>
#include<string>
#include "gasoline.h"

class truck : public gasoline
{
    int carry_cap;
    static int total_trucks;
    public:
        truck(string lic, string manu, int carry, int cap, string type, int carry_cap);
        void display()const override;
        void performMaintenance() const override;
        vehicle* clone() const override;

        static int get_total_trucks() {return total_trucks;}
        ~truck();
};


#endif