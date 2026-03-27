#include "Proizvod.h"
#include <iostream>
#include <iomanip>

using namespace std;

Proizvod::Proizvod() {
    naziv = "";
    nabavna = 0;
    prodajna = 0;
}

void Proizvod::unos() {
    cin.ignore();
    cout << "Naziv: ";
    getline(cin, naziv);

    cout << "Nabavna cijena: ";
    cin >> nabavna;

    cout << "Prodajna cijena: ";
    cin >> prodajna;
}

void Proizvod::ispis() const {
    cout << left << setw(20) << naziv
         << right << setw(12) << fixed << setprecision(2) << nabavna
         << setw(12) << prodajna
         << setw(12) << zarada()
         << setw(11) << postotak() << "%" << endl;
}

double Proizvod::zarada() const {
    return prodajna - nabavna;
}

double Proizvod::postotak() const {
    if (nabavna == 0) return 0;
    return (zarada() / nabavna) * 100;
}

double Proizvod::getNabavna() const {
    return nabavna;
}

string Proizvod::getNaziv() const {
    return naziv;
}