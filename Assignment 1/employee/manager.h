//manager.h

#ifndef MANAGER_H
#define MANAGER_H

#include <iostream>
#include <string>
#include "employee.h"
using namespace std;

class manager : public employee
{
    static int total_manager;

public:
    manager(string name, string id);

    employee* clone() const override;  // Add 'const' and 'override'
    void display() const override;    // Add 'const' and 'override'
    static int get_total_manager() { return total_manager; }

    ~manager();
};

#endif