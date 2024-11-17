//hybrid.h

#ifndef HYBRID_H
#define HYBRID_H

#include <iostream>
#include <string>
#include "gasoline.h"
#include "ev.h"

using namespace std;

class hybrid : public gasoline, public ev
{
    double efficiency;
    static int total_hybrid;

public:
    hybrid(string lic, string manu, int carry, int tank_cap, string fuel_type, int battery_cap, int time, double efficiency);
    void display()const override ;
    void performMaintenance() const override;
    vehicle* clone() const override;

    static int get_hybrid_vehicle() { return total_hybrid; }

    ~hybrid();
};

#endif