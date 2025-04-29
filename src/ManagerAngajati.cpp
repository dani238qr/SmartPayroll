#include "ManagerAngajati.h"
#include <fstream>
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

void ManagerAngajati::adaugaAngajat(const Angajat& a) {
    angajati.push_back(a);
}

void ManagerAngajati::afiseazaTot() const {
    for (const auto& a : angajati) {
        a.afiseaza();
    }
}

void ManagerAngajati::salveazaInFisier(const string& numeFisier) const {
    ofstream fout(numeFisier);
    for (const auto& a : angajati) {
        fout << a.nume << "," << a.functie << "," << a.salariuBrut << endl;
    }
}

void ManagerAngajati::incarcaDinFisier(const string& numeFisier) {
    ifstream fin(numeFisier);
    string nume, functie;
    double salariu;
    while (getline(fin, nume, ',') && getline(fin, functie, ',') && fin >> salariu) {
        fin.ignore();
        angajati.emplace_back(nume, functie, salariu);
    }
}

void ManagerAngajati::genereazaRaport() const {
    double totalBrut = 0, totalNet = 0, totalCostAngajator = 0;
    for (const auto& a : angajati) {
        totalBrut += a.salariuBrut;
        totalNet += a.salariuNet();
        double costAngajator = a.salariuBrut + a.contributieAngajatorCAS() + a.contributieAngajatorSomaj() + a.contributieFondGarantie();
        totalCostAngajator += costAngajator;
    }
    cout << fixed << setprecision(2);
    cout << "\n--- Raport Financiar ---\n";
    cout << "Total salarii brute: " << totalBrut << "\n";
    cout << "Total salarii nete:  " << totalNet << "\n";
    cout << "Cost total angajator: " << totalCostAngajator << "\n";
}

void ManagerAngajati::exportaDetaliiContributii(const string& fisierCSV) const {
    ofstream fout(fisierCSV);
    fout << "Nume,Functie,Brut,CAS (ang.),CASS,Somaj (ang.),Impozit,Net,CAS (angajator),Somaj (angajator),Fond Garantie\n";
    for (const auto& a : angajati) {
        fout << fixed << setprecision(2)
             << a.nume << "," << a.functie << "," << a.salariuBrut << ","
             << a.calculCAS() << "," << a.calculCASS() << "," << a.calculSomaj() << ","
             << a.calculImpozit() << "," << a.salariuNet() << ","
             << a.contributieAngajatorCAS() << "," << a.contributieAngajatorSomaj() << "," << a.contributieFondGarantie() << "\n";
    }
    fout.close();
    cout << "Fisierul CSV cu detalii contributii a fost generat.\n";
}

