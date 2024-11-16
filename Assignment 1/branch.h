#ifndef BRANCH_H
#define BRANCH_H

#include <iostream>
#include <vector>
#include "vehicles/vehicles.h"   // Base class Vehicle and derived classes Car, Bike, Truck, etc.
#include "employee/employees.h" // Base class Employee and derived classes Manager, Staff, etc.

class Branch {
private:
    std::vector<vehicle*> vehicles;    // Polymorphic storage for vehicles
    std::vector<employee*> employees; // Polymorphic storage for employees

public:
    // Constructor and Destructor
    Branch() = default;
    ~Branch();

    // Vehicle management
    void addVehicle(const vehicle* v); // Add any type of vehicle
    void maintenanceAllVehicles();     // Perform maintenance for all vehicles

    // Employee management
    void addEmployee(const employee* e); // Add any type of employee

    // Display information
    void displayVehicles() const;    // Display all vehicles
    void displayEmployees() const;   // Display all employees
};

#endif
