#include "../include/ReportGenerator.h"
#include <fstream>
#include <iostream>
#include <filesystem>

#define REPORTS_FOLDER "data/reports/"

void ReportGenerator::generateReport(const std::vector<Employee>& employees) {
    std::filesystem::create_directories(REPORTS_FOLDER);
    std::string reportFile = REPORTS_FOLDER + std::string("report.txt");
    std::ofstream file(reportFile);
    if (!file.is_open()) {
        std::cerr << "Error creating report file." << std::endl;
        return;
    }
    file << "Company Salary Report:\n";
    for (const auto& emp : employees) {
        file << emp.getName() << " - Gross Salary: " << emp.getGrossSalary() << "\n";
    }
    file.close();
    std::cout << "Report saved to " << reportFile << "\n";
}

