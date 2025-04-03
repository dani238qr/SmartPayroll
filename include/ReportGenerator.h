#ifndef REPORTGENERATOR_H
#define REPORTGENERATOR_H
#include <vector>
#include "Employee.h"
class ReportGenerator {
public:
    static void generateReport(const std::vector<Employee>& employees);
};
#endif
