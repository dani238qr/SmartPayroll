#include <iostream>

using namespace std;

class TaxCalculator {
private:
    double salary;
    double taxRate;

public:
    // Constructor
    TaxCalculator(double s, double t) : salary(s), taxRate(t) {}

    // Metoda pentru calculul impozitului
    double calculateTax() {
        return salary * taxRate / 100;
    }

    // Metoda pentru calculul salariului net
    double calculateNetSalary() {
        return salary - calculateTax();
    }

    // Afisare detalii
    void display() {
        cout << "Salariu brut: " << salary << "\n";
        cout << "Impozit: " << calculateTax() << "\n";
        cout << "Salariu net: " << calculateNetSalary() << "\n";
    }
};

int main() {
    double salary, taxRate;
    cout << "Introdu salariul brut: ";
    cin >> salary;
    cout << "Introdu rata impozitului (%): ";
    cin >> taxRate;
    
    TaxCalculator calculator(salary, taxRate);
    calculator.display();
    
    return 0;
}
