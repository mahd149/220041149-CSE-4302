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
    hybrid(string lic, string manu, int carry, int cap, string type, int battery_cap, int time);
    void display()const;
    void performMaintenance() const;
    vehicle* clone() const;

    ~hybrid();
};

#endif