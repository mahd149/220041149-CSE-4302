//car.h

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
    void display()const override;
    void performMaintenance() const override;
    vehicle* clone() const override;

    static int get_total_cars() {return total_cars;}
    ~car();
};


#endif