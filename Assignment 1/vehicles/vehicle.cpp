#include "vehicle.h"

int vehicle::total_vehicle = 0;

vehicle::vehicle(string lic, string manu, int carry) :
license(lic), manufacturer(manu), carriage_size(carry)
{
    total_vehicle++;
}

vehicle::~vehicle()
{
    total_vehicle--;
}


void vehicle::display()const
{
    cout<<"License: "<<license<<endl;
    cout<<"Manufacturer: "<<manufacturer<<endl;
    cout<<"Carriage size: "<<carriage_size<<endl;

}