#ifndef DRIVER_H
#define DRIVER_H

#include<iostream>
#include<string>
#include "employee.h"


class driver: public employee
{
    static int total_driver;
    public:
        driver(string name, string ID);

       employee* clone()const override;
       void display() const override;
       static int get_total_driver() { return total_driver;}

        ~driver();
};


#endif