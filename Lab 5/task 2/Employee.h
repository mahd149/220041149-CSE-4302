#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee
{
private:
    std::string Name;
    int Day, Month, Year;
    double Salary;

public:
    Employee();

    void setName(const std::string &empName);
    void setDOB(int d, int m, int y);
    void setSalary(double empSalary);

    std::string getName() const;
    void getDOB(int &d, int &m, int &y) const;
    double getSalary() const;

    void setInfo();

    void getInfo() const;

    Employee compareAge(const Employee &e1, const Employee &e2) const;
};

#endif
