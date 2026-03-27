#include "Spremiste.h"
#include <iostream>
#include <iomanip>

using namespace std;

Spremiste::Spremiste() {
    kapacitet = 2;
    broj = 0;
    proizvodi = new Proizvod[kapacitet];
}

Spremiste::~Spremiste() {
    delete[] proizvodi;
}

void Spremiste::prosiri() {
    kapacitet *= 2;

    Proizvod* novi = new Proizvod[kapacitet];

    for (int i = 0; i < broj; i++) {
        novi[i] = proizvodi[i];
    }

    delete[] proizvodi;
    proizvodi = novi;
}

void Spremiste::dodajProizvod() {
    if (broj == kapacitet) {
        prosiri();
    }

    cout << "\nUnos proizvoda:\n";
    proizvodi[broj].unos();
    broj++;
}

void Spremiste::pregled() const {
    if (broj == 0) {
        cout << "Nema podataka!\n";
        return;
    }

    cout << left << setw(20) << "Naziv"
         << right << setw(12) << "Nabavna"
         << setw(12) << "Prodajna"
         << setw(12) << "Zarada"
         << setw(12) << "% Zarade" << endl;

    for (int i = 0; i < broj; i++) {
        proizvodi[i].ispis();
    }
}

void Spremiste::analiza() const {
    if (broj == 0) {
        cout << "Nema podataka!\n";
        return;
    }

    int maxZarada = 0;
    int minNabavna = 0;
    int maxNabavna = 0;

    for (int i = 1; i < broj; i++) {
        if (proizvodi[i].zarada() > proizvodi[maxZarada].zarada())
            maxZarada = i;

        if (proizvodi[i].getNabavna() < proizvodi[minNabavna].getNabavna())
            minNabavna = i;

        if (proizvodi[i].getNabavna() > proizvodi[maxNabavna].getNabavna())
            maxNabavna = i;
    }

    cout << "\nNajveca zarada: " << proizvodi[maxZarada].getNaziv() << endl;
    cout << "Najmanja nabavna: " << proizvodi[minNabavna].getNaziv() << endl;
    cout << "Najveca nabavna: " << proizvodi[maxNabavna].getNaziv() << endl;
}