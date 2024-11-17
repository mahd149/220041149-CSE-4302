// hybrid.cpp

#include "hybrid.h"

int hybrid::total_hybrid = 0;

hybrid::hybrid(string lic, string manu, int carry, int tank_cap, string type, int battery_cap, int time, double efficiency)
    : vehicle(lic, manu, carry),               // Initialize the virtually inherited base class
      gasoline(lic, manu, carry, tank_cap, type),   // Initialize the gasoline base class
      ev(lic, manu, carry, battery_cap, time), // Initialize the ev base class
      efficiency(efficiency)                   // Initialize member variable
{
    total_hybrid++;
}

void hybrid::display() const
{
    cout << "Hybrid Vehicle: \n";
    // vehicle::display();
    gasoline::display();
    cout << "Battery Capacity: " << battery_cap << " kWh\n";
    cout << "Charging Time: " << charging_time << " hours\n";

    cout << "Efficiency factor: " << efficiency << endl;
}

vehicle *hybrid::clone() const
{
    return new hybrid(*this);
}

void hybrid::performMaintenance() const
{
    cout << "Hybrid vehicle license: " << license << " maintenance\n";
}

hybrid::~hybrid() { total_hybrid--; }