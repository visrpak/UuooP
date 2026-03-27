#include <iostream>
#include <cctype>
#include "Spremiste.h"

using namespace std;

void izbornik() {
    cout << "\nA - Dodaj proizvod\nB - Pregled\nC - Analiza\nX - Izlaz\nOdabir: ";
}

int main() {
    Spremiste s;
    char izbor;

    do {
        izbornik();
        cin >> izbor;

        switch (toupper(izbor)) {
            case 'A':
                s.dodajProizvod();
                break;
            case 'B':
                s.pregled();
                break;
            case 'C':
                s.analiza();
                break;
        }

    } while (toupper(izbor) != 'X');

    return 0;
}