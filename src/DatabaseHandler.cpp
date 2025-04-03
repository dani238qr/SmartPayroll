#include "../include/DatabaseHandler.h"
#include <fstream>
#include <iostream>
#include <filesystem>

#define DATA_FOLDER "data/"
#define EMPLOYEE_FILE "data/employees.txt"

std::vector<Employee> DatabaseHandler::loadEmployees() {
    std::vector<Employee> employees;
    std::ifstream file(EMPLOYEE_FILE);
    if (!file.is_open()) {
        std::cout << "No employee data found.\n";
        return employees;
    }
    std::string name;
    double salary;
    while (file >> name >> salary) {
        employees.emplace_back(name, salary);
    }
    file.close();
    return employees;
}

void DatabaseHandler::saveEmployees(const std::vector<Employee>& employees) {
    std::filesystem::create_directories(DATA_FOLDER);
    std::ofstream file(EMPLOYEE_FILE);
    for (const auto& emp : employees) {
        file << emp.getName() << " " << emp.getGrossSalary() << "\n";
    }
    file.close();
    std::cout << "Employees saved to " << EMPLOYEE_FILE << "\n";
}
