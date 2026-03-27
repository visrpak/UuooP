#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Osoba {
private:
    string ime;
    string prezime;
    int godinaRodjenja;

public:
    friend istream& operator>>(istream& in, Osoba& o) {
        cout << "Unesite ime: ";
        in >> o.ime;
        cout << "Unesite prezime: ";
        in >> o.prezime;
        cout << "Unesite godinu rodenja: ";
        in >> o.godinaRodjenja;
        return in;
    }

    friend ostream& operator<<(ostream& out, const Osoba& o) {
        out << left << setw(10) << o.prezime
            << setw(10) << o.ime
            << dec << o.godinaRodjenja << " "
            << oct << o.godinaRodjenja << " "
            << hex << uppercase << o.godinaRodjenja << " "
            << dec << nouppercase
            << setw(12) << o.ime;
        return out;
    }

    int getGodina() const { return godinaRodjenja; }
    string getIme() const { return ime; }
    string getPrezime() const { return prezime; }
};

int main() {
    const int N = 3;
    Osoba osobe[N];

    for (int i = 0; i < N; i++) {
        cin >> osobe[i];
        cout << endl;
    }

    cout << "Popis osoba:\n";
    for (int i = 0; i < N; i++) {
        cout << osobe[i] << endl;
    }

    int trenutnaGodina = 2026;
    double suma = 0;

    for (int i = 0; i < N; i++) {
        suma += (trenutnaGodina - osobe[i].getGodina());
    }

    cout << "Prosjek: " << suma / N << endl;

    int najmladi = 0;
    for (int i = 1; i < N; i++) {
        if (osobe[i].getGodina() > osobe[najmladi].getGodina()) {
            najmladi = i;
        }
    }

    cout << "Najmladi: " << osobe[najmladi].getIme()
         << " " << osobe[najmladi].getPrezime() << endl;
}