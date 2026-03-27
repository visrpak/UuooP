#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct proizvod {
    string naziv;
    double cijenaBezPDV;
    int kolicina;
};

int main() {
    const int N = 3;
    proizvod proizvodi[N];

    double stopaPDV = 0.25;

    for (int i = 0; i < N; i++) {
        cout << "Unesite naziv " << i + 1 << ". proizvoda: ";
        cin >> proizvodi[i].naziv;

        cout << "Unesite cijenu bez PDV-a za " << proizvodi[i].naziv << ": ";
        cin >> proizvodi[i].cijenaBezPDV;

        cout << "Unesite prodanu kolicinu za " << proizvodi[i].naziv << ": ";
        cin >> proizvodi[i].kolicina;

        cout << endl;
    }

    double ukupnoZaNaplatu = 0;
    double ukupniPDV = 0;

    int najskuplji = 0;

    cout << "\nRACUN" << endl;
    cout << "---------------------------------------------------------------" << endl;
    cout << left << setw(12) << "Naziv"
         << right << setw(10) << "Cijena"
         << setw(10) << "Kol."
         << setw(15) << "Ukupno"
         << setw(12) << "PDV" << endl;
    cout << "---------------------------------------------------------------" << endl;

    for (int i = 0; i < N; i++) {
        double ukupnoBezPDV = proizvodi[i].cijenaBezPDV * proizvodi[i].kolicina;
        double iznosPDV = ukupnoBezPDV * stopaPDV;
        double ukupnoSaPDV = ukupnoBezPDV + iznosPDV;

        ukupnoZaNaplatu += ukupnoSaPDV;
        ukupniPDV += iznosPDV;

        if (proizvodi[i].cijenaBezPDV > proizvodi[najskuplji].cijenaBezPDV) {
            najskuplji = i;
        }

        cout << left << setw(12) << proizvodi[i].naziv
             << right << setw(10) << fixed << setprecision(2) << proizvodi[i].cijenaBezPDV
             << setw(10) << proizvodi[i].kolicina
             << setw(15) << ukupnoSaPDV
             << setw(12) << iznosPDV
             << endl;
    }

    cout << "Ukupni iznos za naplatu: " << fixed << setprecision(2) << ukupnoZaNaplatu << endl;
    cout << "Ukupni iznos PDV-a:      " << fixed << setprecision(2) << ukupniPDV << endl;

    cout << "Najskuplji proizvod je: " << proizvodi[najskuplji].naziv
         << " (" << fixed << setprecision(2) << proizvodi[najskuplji].cijenaBezPDV << " EUR bez PDV-a)" << endl;

    return 0;
}
