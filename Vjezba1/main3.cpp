#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct djelatnik {
    string ime;
    string prezime;
    double kilometri;
    double priznatiTroskovi;
};

int main() {
    const int N = 3;
    djelatnik d[N];

    double naknadaPoKilometru = 0.20;

    for (int i = 0; i < N; i++) {
        cout << "Unesite ime " << i + 1 << ". djelatnika: ";
        cin >> d[i].ime;

        cout << "Unesite prezime " << i + 1 << ". djelatnika: ";
        cin >> d[i].prezime;

        cout << "Unesite broj predenih kilometara: ";
        cin >> d[i].kilometri;

        cout << "Unesite iznos priznatih troskova: ";
        cin >> d[i].priznatiTroskovi;

        cout << endl;
    }

    cout << "ISPIS DJELATNIKA" << endl;

    cout << left << setw(12) << "Ime"
         << setw(15) << "Prezime"
         << right << setw(12) << "Kilometri"
         << setw(15) << "Isplata" << endl;


    int najduziPut = 0;
    int najveciIznos = 0;

    for (int i = 0; i < N; i++) {
        double ukupnoZaIsplatu = d[i].kilometri * naknadaPoKilometru + d[i].priznatiTroskovi;

        cout << left << setw(12) << d[i].ime
             << setw(15) << d[i].prezime
             << right << setw(12) << fixed << setprecision(2) << d[i].kilometri
             << setw(15) << ukupnoZaIsplatu
             << endl;

        if (d[i].kilometri > d[najduziPut].kilometri) {
            najduziPut = i;
        }

        double trenutniIznos = d[i].kilometri * naknadaPoKilometru + d[i].priznatiTroskovi;
        double maxIznos = d[najveciIznos].kilometri * naknadaPoKilometru + d[najveciIznos].priznatiTroskovi;

        if (trenutniIznos > maxIznos) {
            najveciIznos = i;
        }
    }

    cout << "Djelatnik koji je prosao najdulji put je: "
         << d[najduziPut].ime << " " << d[najduziPut].prezime << endl;

    cout << "Djelatnik kojem ce se isplatiti najveci iznos je: "
         << d[najveciIznos].ime << " " << d[najveciIznos].prezime << endl;

    return 0;
}
