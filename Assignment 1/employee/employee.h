#ifndef EMP_H
#define EMP_H


#include<iostream>
#include<string>

using namespace std;

class employee
{
    string name;
    string ID;
    static int total_emp;

    public:
    employee(string name, string ID);

    virtual employee* clone()const = 0;

    virtual void display() = 0;
    ~employee();
};




#endif