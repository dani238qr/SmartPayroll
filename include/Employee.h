#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
class Employee {
private:
    std::string name;
    double grossSalary;
public:
    Employee(std::string name, double salary);
    std::string getName() const;
    double getGrossSalary() const;
};
#endif
