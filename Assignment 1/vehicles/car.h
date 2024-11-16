#ifndef CAR_H
#define CAR_H

#include<iostream>
#include<string>
#include "gasoline.h"

class car: public gasoline
{
    int passenger;
    static int total_cars;
    public:
    car(string lic, string manu, int carry, int cap, string type, int pass);
    void display()const;
    void performMaintenance() const;
    vehicle* clone() const;
    ~car();
};


#endif