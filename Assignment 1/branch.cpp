#include "branch.h"

// Destructor: Clean up all dynamically allocated objects
Branch::~Branch() {
    for (vehicle* v : vehicles) {
        delete v;
    }
    vehicles.clear();

    for (employee* e : employees) {
        delete e;
    }
    employees.clear();
}

// Add a vehicle to the branch
void Branch::addVehicle(const vehicle* v) {
    vehicles.push_back(v->clone()); // Clone to maintain polymorphism
}

// Perform maintenance for all vehicles
void Branch::maintenanceAllVehicles() {
    std::cout << "Performing maintenance for all vehicles in the branch:\n";
    for (vehicle* v : vehicles) {
        v->performMaintenance(); // Polymorphic call
    }
}

// Add an employee to the branch
void Branch::addEmployee(const employee* e) {
    employees.push_back(e->clone()); // Clone to maintain polymorphism
}

// Display all vehicles
void Branch::displayVehicles() const {
    std::cout << "Vehicles in the branch:\n";
    for (const auto& v : vehicles) {
        v->display(); cout<<"\n";
        // std::cout << v->display() << "\n"; // Assume getDetails() is a pure virtual function
    }
}

// Display all employees
void Branch::displayEmployees() const {
    std::cout << "Employees in the branch:\n";
    for ( const auto& e : employees) {
        e->display(); cout<<"\n";
        // Assume getDetails() is a pure virtual function
    }
}
