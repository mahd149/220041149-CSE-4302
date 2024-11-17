#include<iostream>
#include<vector>
#include<string>
#include"branch.h"

using namespace std;


int main()
{
     // Create a branch
    Branch br;

    // Add vehicles to the branch
    br.addVehicle(new car("1001", "Toyota", 500, 40, "Octen", 5 ));
    br.addVehicle(new car("1002", "Honda", 500, 45, "Octen 2", 5 ));
    br.addVehicle(new truck("2001", "Volvo", 1000, 100,"Diesel", 1500 ));
    br.addVehicle(new truck("2002", "Ford", 900, 100,"Diesel", 1500));
    br.addVehicle(new ev("3001", "Tesla Y3", 600, 58, 120));
    br.addVehicle(new ev("3002", "Tesla Roadster", 600, 58, 120));
    br.addVehicle(new hybrid("4001", "Toyota", 450, 30, "Octane", 30, 130, 0.7 ));
    br.addVehicle(new hybrid("4002", "Hyundai", 450, 30, "Octane", 30, 130, 0.5));
    br.addVehicle(new hybrid("4003", "Honda", 450, 30, "Octane", 30, 130, 0.6));

    // Add employees to the branch
    br.addEmployee(new manager("Alice", "Mgr001"));
    br.addEmployee(new manager("Bob", "Mgr002"));
    br.addEmployee(new driver("Charlie", "Drv001"));
    br.addEmployee(new driver("Dave", "Drv002"));
    br.addEmployee(new driver("Eve", "Drv003"));
    br.addEmployee(new driver("Frank", "Drv004"));
    br.addEmployee(new driver("Grace", "Drv005"));
    br.addEmployee(new driver("Hank", "Drv006"));
    br.addEmployee(new driver("Ivy", "Drv007"));
    br.addEmployee(new driver("Jack", "Drv008"));
    br.addEmployee(new driver("Kate", "Drv009"));

    // Display all vehicles and employees
    std::cout << "\n--- Vehicles in the Branch ---\n";
    br.displayVehicles();

    cout<<"Number of vehicles: "<<vehicle::get_total_vehicle()<<endl;

    std::cout << "\n--- Employees in the Branch ---\n";
    br.displayEmployees();

    cout<<"Number of employees: "<<employee::getTotalEmployees()<<endl;

    // Perform maintenance for all vehicles
    std::cout << "\n--- Performing Maintenance ---\n";
    br.maintenanceAllVehicles();

    return 0;
}

