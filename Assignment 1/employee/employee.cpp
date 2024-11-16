#include"employee.h"


int employee::total_emp = 0;

employee::employee(string name, string id) : Name(name), ID(id) { total_emp++; };

employee::~employee() { total_emp--;};