#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct osoba {
    string ime;
    string prezime;
    int godinaRodjenja;
};

int main() {
    const int N = 3;
    osoba osobe[N];

    for (int i = 0; i < N; i++) {
        cout << "Unesite ime " << i + 1 << ". osobe: ";
        cin >> osobe[i].ime;

        cout << "Unesite prezime " << i + 1 << ". osobe: ";
        cin >> osobe[i].prezime;

        cout << "Unesite godinu rodenja " << i + 1 << ". osobe: ";
        cin >> osobe[i].godinaRodjenja;

        cout << endl;
    }

    cout << "Popis osoba:\n";
    for (int i = 0; i < N; i++) {
        cout << left << setw(10) << osobe[i].prezime
             << setw(10) << osobe[i].ime
             << dec << osobe[i].godinaRodjenja << " "
             << oct << osobe[i].godinaRodjenja << " "
             << hex << uppercase << osobe[i].godinaRodjenja << " "
             << dec << nouppercase
             << setw(12) << osobe[i].ime
             << endl;
    }

    int trenutnaGodina = 2026;
    double sumaStarosti = 0;

    for (int i = 0; i < N; i++) {
        sumaStarosti += (trenutnaGodina - osobe[i].godinaRodjenja);
    }

    double prosjek = sumaStarosti / N;
    cout << "\nProsjecna starost: " << fixed << setprecision(2) << prosjek << endl;

    int indeksNajmlade = 0;
    for (int i = 1; i < N; i++) {
        if (osobe[i].godinaRodjenja > osobe[indeksNajmlade].godinaRodjenja) {
            indeksNajmlade = i;
        }
    }

    cout << "Najmlada osoba je: "
         << osobe[indeksNajmlade].ime << " "
         << osobe[indeksNajmlade].prezime
         << ", rodena " << osobe[indeksNajmlade].godinaRodjenja
         << "." << endl;

    return 0;
}
