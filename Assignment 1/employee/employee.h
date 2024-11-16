//employee.h

#ifndef EMP_H
#define EMP_H


#include<iostream>
#include<string>

using namespace std;

class employee
{
    protected:
    string Name;
    string ID;
    static int total_emp;

    public:
    employee(string name, string id);

    virtual employee* clone()const = 0;

    virtual void display()const = 0;

    static int getTotalEmployees() { return total_emp; }
    string get_name()const {return Name;}
    string get_id()const { return ID; }

    ~employee();
};




#endif