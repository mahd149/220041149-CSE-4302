
#include "employee.h"
#include <iostream>
using namespace std;


Employee::Employee() : Name("John Doe"), Day(1), Month(1), Year(2002), Salary(10000) {}


void Employee::setName(const string& empName) {
    if (empName.length() > 2) {
        Name = empName;
    } else {
        Name = "John Doe";
    }
}

void Employee::setDOB(int d, int m, int y) {

    if ((2024 - y) > 18) {
        Day = d;
        Month = m;
        Year = y;
    } else {
        Day = 1;
        Month = 1;
        Year = 2002;
    }
}

void Employee::setSalary(double empSalary) {
    if (empSalary >= 10000 && empSalary <= 100000) {
        Salary = empSalary;
    } else {
        Salary = 10000;
    }
}


string Employee::getName() const {
    return Name;
}

void Employee::getDOB(int& d, int& m, int& y) const {
    d = Day;
    m = Month;
    y = Year;
}

double Employee::getSalary() const {
    return Salary;
}


void Employee::setInfo() {
    string empName;
    int d, m, y;
    double empSalary;
    
    cout << "Enter Name: ";
    getline(cin, empName);
    setName(empName);

    cout << "Enter date of birth (Day Month Year): ";
    cin >> d >> m >> y;
    setDOB(d, m, y);

    cout << "Enter Salary: ";
    cin >> empSalary;
    setSalary(empSalary);
}

void Employee::getInfo() const {
    cout << "Employee Information: \n";
    cout << "Name: " << getName() << "\n";
    int d, m, y;
    getDOB(d, m, y);
    cout << "Date of Birth: " << d << "-" << m << "-" << y << "\n";
    cout << "Salary: BDT " << getSalary() << "\n\n";
}


Employee Employee::compareAge(const Employee& e1, const Employee& e2) const {
    if (e1.Year < e2.Year) return e1;
    else if (e1.Year > e2.Year) return e2;
    else {
        if (e1.Month < e2.Month) return e1;
        else if (e1.Month > e2.Month) return e2;
        else {
            if (e1.Day < e2.Day) return e1;
            else return e2;
        }
    }
}
