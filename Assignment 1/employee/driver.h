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

        void display()const;

        ~driver();
};


#endif