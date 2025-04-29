#include <iostream>
#include <string>
#include "ManagerAngajati.h"

using namespace std;

void meniu() {
    ManagerAngajati manager;
    int optiune;

    do {
        cout << "\n1. Adauga angajat\n2. Afiseaza angajati\n3. Salveaza in fisier\n4. Incarca din fisier\n5. Genereaza raport financiar\n6. Exporta detalii contributii CSV\n0. Iesire\nOptiune: ";
        cin >> optiune;
        cin.ignore();

        if (optiune == 1) {
            string nume, functie;
            double salariu;
            cout << "Nume: "; getline(cin, nume);
            cout << "Functie: "; getline(cin, functie);
            cout << "Salariu brut: "; cin >> salariu;
            manager.adaugaAngajat(Angajat(nume, functie, salariu));
        } else if (optiune == 2) {
            manager.afiseazaTot();
        } else if (optiune == 3) {
            manager.salveazaInFisier("angajati.csv");
            cout << "Date salvate.\n";
        } else if (optiune == 4) {
            manager.incarcaDinFisier("angajati.csv");
            cout << "Date incarcate.\n";
        } else if (optiune == 5) {
            manager.genereazaRaport();
        } else if (optiune == 6) {
            manager.exportaDetaliiContributii("contributii_angajati.csv");
        }
    } while (optiune != 0);
}

int main(int argc, char* argv[]) {
    ManagerAngajati manager;
    manager.incarcaDinFisier("angajati.csv");

    if (argc > 1) {
        string comanda = argv[1];
        if (comanda == "adauga" && argc == 5) {
            string nume = argv[2];
            string functie = argv[3];
            double salariu = stod(argv[4]);
            manager.adaugaAngajat(Angajat(nume, functie, salariu));
            manager.salveazaInFisier("angajati.csv");
            cout << "Angajat adaugat cu succes.\n";
        } else if (comanda == "afiseaza") {
            manager.afiseazaTot();
        } else if (comanda == "raport") {
            manager.genereazaRaport();
        } else if (comanda == "exportcsv") {
            manager.exportaDetaliiContributii("contributii_angajati.csv");
        } else {
            cout << "Comanda necunoscuta sau argumente insuficiente.\n";
        }
        return 0;
    } else {
        meniu();
    }
    return 0;
}

