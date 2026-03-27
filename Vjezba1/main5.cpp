#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct vozilo {
    string naziv;
    string model;
    string registracija;
    double kilometri;
    double gorivo;
};

int main() {
    const int N = 2;
    vozilo v[N];

    for (int i = 0; i < N; i++) {
        cout << "Unesite naziv vozila: ";
        cin >> v[i].naziv;

        cout << "Unesite model vozila: ";
        cin >> v[i].model;

        cout << "Unesite registarsku oznaku: ";
        cin >> v[i].registracija;

        cout << "Unesite broj prijedenih kilometara: ";
        cin >> v[i].kilometri;

        cout << "Unesite kolicinu potrosenog goriva: ";
        cin >> v[i].gorivo;

        cout << endl;
    }

    cout << left << setw(15) << "Naziv"
         << setw(10) << "Model"
         << setw(10) << "Reg.ozn."
         << setw(10) << "Km"
         << setw(10) << "Gorivo"
         << setw(25) << "Opis potrosnje" << endl;

    for (int i = 0; i < N; i++) {
        double prosjek = (v[i].gorivo / v[i].kilometri) * 100;
        string opis;

        if (prosjek < 6) {
            opis = "stedljivo vozilo";
        } else if (prosjek <= 10) {
            opis = "standardno";
        } else {
            opis = "vozilo s visokom potrosnjom";
        }

        cout << left << setw(15) << v[i].naziv
             << setw(10) << v[i].model
             << setw(10) << v[i].registracija
             << setw(10) << fixed << setprecision(2) << v[i].kilometri
             << setw(10) << v[i].gorivo
             << setw(25) << opis << endl;
    }

    return 0;
}
