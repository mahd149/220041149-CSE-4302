#ifndef BIKE_H
#define BIKE_H

#include <iostream>
#include <string>
#include "gasoline.h"

class bike : public gasoline
{
    static int total_motor;

public:
    bike(string lic, string manu, int carry, int cap, string type);
    void display()const;
    void performMaintenance() const;
    vehicle* clone() const;
    ~bike();
};

#endif