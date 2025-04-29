#include "Angajat.h"
#include <iostream>
#include <iomanip>

using namespace std;

Angajat::Angajat(string n, string f, double s) : nume(n), functie(f), salariuBrut(s) {}

double Angajat::calculCAS() const { return salariuBrut * 0.25; }
double Angajat::calculCASS() const { return salariuBrut * 0.10; }
double Angajat::calculSomaj() const { return salariuBrut * 0.005; }

double Angajat::calculImpozit() const {
    double baza = salariuBrut - calculCAS() - calculCASS() - calculSomaj();
    return baza * 0.10;
}

double Angajat::salariuNet() const {
    return salariuBrut - calculCAS() - calculCASS() - calculSomaj() - calculImpozit();
}

double Angajat::contributieAngajatorCAS() const { return salariuBrut * 0.0225; }
double Angajat::contributieAngajatorSomaj() const { return salariuBrut * 0.005; }
double Angajat::contributieFondGarantie() const { return salariuBrut * 0.0025; }

void Angajat::afiseaza() const {
    cout << fixed << setprecision(2);
    cout << "Nume: " << nume << ", Functie: " << functie
         << ", Brut: " << salariuBrut << ", Net: " << salariuNet() << endl;
}

