//gasoline.h
//abstract class

#ifndef GAS_H
#define GAS_H

#include<iostream>
#include<string>
#include"vehicle.h"

using namespace std;

class gasoline : virtual public vehicle
{
    int tank_cap;
    string fuel_type;
    static int total_gases;

    public:
        gasoline(string lic, string manu, int carry, int cap, string type);
        ~gasoline();

        void display() const;

        static int get_total_gases() {return total_gases;}

          

};

#endif