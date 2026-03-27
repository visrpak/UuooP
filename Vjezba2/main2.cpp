#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <cctype>
using namespace std;

const int MAX = 100;

string naziv[MAX];
double nabavna[MAX];
double prodajna[MAX];
int N = 0;

void ispisiIzbornik() {
    cout << "\n===== IZBORNIK =====" << endl;
    cout << "A - Unos podataka" << endl;
    cout << "B - Pregled podataka" << endl;
    cout << "C - Analiza podataka" << endl;
    cout << "X - Izlaz" << endl;
    cout << "Odabir: ";
}

void fUnos() {
    do {
        cout << "Unesite broj proizvoda (1-" << MAX << "): ";
        cin >> N;
    } while (N < 1 || N > MAX);

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < N; i++) {
        cout << "\nProizvod " << i + 1 << endl;

        cout << "Naziv: ";
        getline(cin, naziv[i]);

        cout << "Nabavna cijena: ";
        cin >> nabavna[i];

        cout << "Prodajna cijena: ";
        cin >> prodajna[i];

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

void fPregled() {
    if (N == 0) {
        cout << "Nema unesenih podataka!" << endl;
        return;
    }

    cout << "\n===== PREGLED PODATAKA =====\n";
    cout << left << setw(20) << "Naziv"
         << right << setw(12) << "Nabavna"
         << setw(12) << "Prodajna"
         << setw(12) << "Zarada"
         << setw(12) << "% Zarade" << endl;

    for (int i = 0; i < N; i++) {
        double zarada = prodajna[i] - nabavna[i];
        double postotak = (nabavna[i] != 0) ? (zarada / nabavna[i]) * 100 : 0;

        cout << left << setw(20) << naziv[i]
             << right << setw(12) << fixed << setprecision(2) << nabavna[i]
             << setw(12) << prodajna[i]
             << setw(12) << zarada
             << setw(11) << postotak << "%" << endl;
    }
}


void fAnaliza() {
    if (N == 0) {
        cout << "Nema podataka za analizu!" << endl;
        return;
    }

    int maxRazlika = 0;
    int minNabavna = 0;
    int maxNabavna = 0;

    for (int i = 1; i < N; i++) {
        if ((prodajna[i] - nabavna[i]) > (prodajna[maxRazlika] - nabavna[maxRazlika])) {
            maxRazlika = i;
        }

        if (nabavna[i] < nabavna[minNabavna]) {
            minNabavna = i;
        }

        if (nabavna[i] > nabavna[maxNabavna]) {
            maxNabavna = i;
        }
    }

    cout << "\n===== ANALIZA =====" << endl;

    cout << "\nNajveca zarada:" << endl;
    cout << naziv[maxRazlika] << " -> "
         << prodajna[maxRazlika] - nabavna[maxRazlika] << endl;

    cout << "\nNajmanja nabavna cijena:" << endl;
    cout << naziv[minNabavna] << " -> "
         << nabavna[minNabavna] << endl;

    cout << "\nNajveca nabavna cijena:" << endl;
    cout << naziv[maxNabavna] << " -> "
         << nabavna[maxNabavna] << endl;
}

int main() {
    char izbor;

    do {
        ispisiIzbornik();
        cin >> izbor;

        switch (toupper(izbor)) {
            case 'A':
                fUnos();
                break;
            case 'B':
                fPregled();
                break;
            case 'C':
                fAnaliza();
                break;
            case 'X':
                cout << "Izlaz iz programa..." << endl;
                break;
            default:
                cout << "Neispravan odabir!" << endl;
        }

    } while (toupper(izbor) != 'X');

    return 0;
}