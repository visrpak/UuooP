#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Zivotinja {
public:
    string ime;
    int kolikoZivih;
    double prosjecnaTezina;

    Zivotinja(string i, int k, double p) {
        ime = i;
        kolikoZivih = k;
        prosjecnaTezina = p;
    }

    void ispisi() const {
        cout << setw(15) << ime
             << setw(15) << kolikoZivih
             << setw(15) << fixed << setprecision(2) << prosjecnaTezina
             << endl;
    }
};

int main() {
    Zivotinja z1("Pas", 900000, 25.5);
    Zivotinja z2("Macka", 600000, 4.3);
    Zivotinja z3("Slon", 40000, 5000.0);
    Zivotinja z4("Lav", 20000, 190.7);

    cout << setw(15) << "Ime"
         << setw(15) << "Koliko zivih"
         << setw(15) << "Prosj. tezina"
         << endl;

    cout << string(45, '-') << endl;

    z1.ispisi();
    z2.ispisi();
    z3.ispisi();
    z4.ispisi();

    return 0;
}
