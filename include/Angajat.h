#ifndef ANGAJAT_H
#define ANGAJAT_H

#include <string>

class Angajat {
public:
    std::string nume;
    std::string functie;
    double salariuBrut;

    Angajat(std::string n, std::string f, double s);

    double calculCAS() const;
    double calculCASS() const;
    double calculSomaj() const;
    double calculImpozit() const;
    double salariuNet() const;

    double contributieAngajatorCAS() const;
    double contributieAngajatorSomaj() const;
    double contributieFondGarantie() const;

    void afiseaza() const;
};

#endif

