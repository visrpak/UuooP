#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Proizvod {
private:
    string naziv;
    double cijenaBezPDV;
    int kolicina;

public:
    friend istream& operator>>(istream& in, Proizvod& p) {
        cout << "Naziv: ";
        in >> p.naziv;
        cout << "Cijena: ";
        in >> p.cijenaBezPDV;
        cout << "Kolicina: ";
        in >> p.kolicina;
        return in;
    }

    friend ostream& operator<<(ostream& out, const Proizvod& p) {
        out << left << setw(12) << p.naziv
            << right << setw(10) << fixed << setprecision(2) << p.cijenaBezPDV
            << setw(10) << p.kolicina;
        return out;
    }

    double getCijena() const { return cijenaBezPDV; }
    int getKolicina() const { return kolicina; }
    string getNaziv() const { return naziv; }
};

int main() {
    const int N = 3;
    Proizvod p[N];
    double pdv = 0.25;

    for (int i = 0; i < N; i++) cin >> p[i];

    double ukupno = 0, ukupniPDV = 0;
    int naj = 0;

    for (int i = 0; i < N; i++) {
        double bez = p[i].getCijena() * p[i].getKolicina();
        double iznosPDV = bez * pdv;
        ukupno += bez + iznosPDV;
        ukupniPDV += iznosPDV;

        if (p[i].getCijena() > p[naj].getCijena()) naj = i;
    }

    cout << "Ukupno: " << ukupno << endl;
    cout << "PDV: " << ukupniPDV << endl;
    cout << "Najskuplji: " << p[naj].getNaziv() << endl;
}