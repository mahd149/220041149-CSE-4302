// abstract class
//vehicle.h

#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
using namespace std;

class vehicle
{
private:
    string license;
    string manufacturer;
    int carriage_size;
    static int total_vehicle;

public:
    vehicle(string lic, string manu, int carry);
    virtual void display() const = 0;
    virtual void performMaintenance() const = 0;
    virtual vehicle* clone() const = 0;  

    virtual ~vehicle();
};

#endif