#include<bits/stdc++.h>
#include "employee.h"
#include <iostream>

using namespace std;

int main() {
    Employee emp1, emp2;

    cout << "Enter details for Employee 1:\n";
    emp1.setInfo();
    cin.ignore();

    cout << "\nEnter details for Employee 2:\n";
    emp2.setInfo();

    
    cout << "\nDetails of Employee 1:\n";
    emp1.getInfo();

    cout << "Details of Employee 2:\n";
    emp2.getInfo();

   
    Employee elder = emp1.compareAge(emp1,emp2);
    cout << "The elder employee is:\n";
    elder.getInfo();

    return 0;
}
