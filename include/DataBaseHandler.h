#ifndef DATABASEHANDLER_H
#define DATABASEHANDLER_H
#include <vector>
#include "Employee.h"
class DatabaseHandler {
public:
    std::vector<Employee> loadEmployees();
    void saveEmployees(const std::vector<Employee>& employees);
};
#endif
