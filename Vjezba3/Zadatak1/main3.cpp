#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Djelatnik {
private:
    string ime, prezime;
    double kilometri, troskovi;

public:
    friend istream& operator>>(istream& in, Djelatnik& d) {
        cout << "Ime: ";
        in >> d.ime;
        cout << "Prezime: ";
        in >> d.prezime;
        cout << "Km: ";
        in >> d.kilometri;
        cout << "Troskovi: ";
        in >> d.troskovi;
        return in;
    }

    double iznos() const {
        return kilometri * 0.20 + troskovi;
    }

    double getKm() const { return kilometri; }
    string getIme() const { return ime; }
    string getPrezime() const { return prezime; }
};

int main() {
    const int N = 3;
    Djelatnik d[N];

    for (int i = 0; i < N; i++) cin >> d[i];

    int maxKm = 0, maxIznos = 0;

    for (int i = 0; i < N; i++) {
        if (d[i].getKm() > d[maxKm].getKm()) maxKm = i;
        if (d[i].iznos() > d[maxIznos].iznos()) maxIznos = i;
    }

    cout << "Najvise km: " << d[maxKm].getIme() << endl;
    cout << "Najveci iznos: " << d[maxIznos].getIme() << endl;
}