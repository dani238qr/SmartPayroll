#include "../include/Employee.h"
Employee::Employee(std::string name, double salary) : name(name), grossSalary(salary) {}
std::string Employee::getName() const { return name; }
double Employee::getGrossSalary() const { return grossSalary; }
