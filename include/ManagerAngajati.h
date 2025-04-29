#ifndef MANAGER_ANGAJATI_H
#define MANAGER_ANGAJATI_H

#include <vector>
#include <string>
#include "Angajat.h"

class ManagerAngajati {
    std::vector<Angajat> angajati;

public:
    void adaugaAngajat(const Angajat& a);
    void afiseazaTot() const;
    void salveazaInFisier(const std::string& numeFisier) const;
    void incarcaDinFisier(const std::string& numeFisier);
    void genereazaRaport() const;
    void exportaDetaliiContributii(const std::string& fisierCSV) const;
};

#endif

