//manager.cpp


#include "manager.h"

int manager::total_manager = 0;

manager::manager(string name, string id) :employee(name,id) 
{
    total_manager ++;
}

void manager::display()const{
    
    cout<<"Name: "<<"Mr."<<get_name()<<endl;
    cout<<"ID: "<<get_id()<<endl;

}

employee* manager::clone() const {
    return new manager(*this); // Create a copy of the current object
}

// Destructor
manager::~manager() {
    total_manager--;
}