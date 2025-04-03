#include <iostream>
#include <vector>
#include <string>
#include "../include/Employee.h"
#include "../include/SalaryCalculator.h"
#include "../include/TaxCalculator.h"
#include "../include/ReportGenerator.h"
#include "../include/DatabaseHandler.h"

void showMenu() {
    std::cout << "\nTax Calculation Program";
    std::cout << "\n1. Add Employee";
    std::cout << "\n2. Calculate Salary";
    std::cout << "\n3. Show All Employees";
    std::cout << "\n4. Generate Report";
    std::cout << "\n5. Exit";
    std::cout << "\nChoose an option: ";
}

int main(int argc, char* argv[]) {
    DatabaseHandler dbHandler;
    std::vector<Employee> employees = dbHandler.loadEmployees();

    if (argc > 1) {
        std::string command = argv[1];
        if (command == "add_employee" && argc == 4) {
            std::string name = argv[2];
            double salary = std::stod(argv[3]);
            Employee newEmp(name, salary);
            employees.push_back(newEmp);
            dbHandler.saveEmployees(employees);
            std::cout << "Added employee via command: " << name << "\n";
            return 0;
        }
    }

    while (true) {
        showMenu();
        int choice;
        std::cin >> choice;
        std::cin.ignore();  // Ignore the newline character from previous input
        if (choice == 1) {
            std::string name;
            double salary;
            std::cout << "Enter name: ";
            std::getline(std::cin, name);  // Read name with spaces
            std::cout << "Enter gross salary: ";
            std::cin >> salary;
            Employee newEmp(name, salary);
            employees.push_back(newEmp);
            dbHandler.saveEmployees(employees);
            std::cout << "Employee added!\n";
        } else if (choice == 2) {
            for (const auto& emp : employees) {
                double netSalary = SalaryCalculator::calculateNetSalary(emp.getGrossSalary());
                std::cout << emp.getName() << " - Net Salary: " << netSalary << "\n";
            }
        } else if (choice == 3) {
            // Show all employees without the salary
            for (const auto& emp : employees) {
                std::cout << emp.getName() << "\n";
            }
        } else if (choice == 4) {
            ReportGenerator::generateReport(employees);
            std::cout << "Report generated.\n";
        } else if (choice == 5) {
            break;
        }
    }
    return 0;
}
