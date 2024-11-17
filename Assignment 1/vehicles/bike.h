#ifndef BIKE_H
#define BIKE_H

#include <iostream>
#include <string>
#include "gasoline.h"

class bike : public gasoline
{
    static int total_bike;

public:
    bike(string lic, string manu, int carry, int cap, string type);
    void display()const override;
    void performMaintenance() const override;
    
    vehicle* clone() const override;

    static int get_total_bike() { return total_bike;}

    ~bike();
};

#endif