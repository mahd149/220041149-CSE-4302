#ifndef MANAGER_H
#define MANAGER_H

#include <iostream>
#include <string>
#include "employee.h"

class manager : public employee
{
    static int total_manager;

public:
    manager(string name, string ID);

    void display() const;

    ~manager();
};

#endif