#include "driver.h"

int driver::total_driver = 0;

driver::driver(string name, string id) : employee(name,id) 
{
    total_driver++;
}

employee* driver::clone() const{
    return new driver(*this);
}

void driver::display()const{
    
    cout<<"Name: "<<get_name()<<endl;
    cout<<"ID: "<<get_id()<<endl;

}

driver::~driver() {
    total_driver--;
}