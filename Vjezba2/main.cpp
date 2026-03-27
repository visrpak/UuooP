#include <iostream>
using namespace std;

int Suma(int N) {
    int suma = 0;
    for (int i = 1; i <= N; i++) {
        suma += i;
    }
    return suma;
}

long long int Produkt(int N) {
    long long int produkt = 1;
    for (int i = 1; i <= N; i++) {
        produkt *= i;
    }
    return produkt;
}

void SumaProduktPtr(int N, int* suma, long long int* produkt) {
    *suma = 0;
    *produkt = 1;

    for (int i = 1; i <= N; i++) {
        *suma += i;
        *produkt *= i;
    }
}

void SumaProdukt(int N, int& suma, long long int& produkt) {
    suma = 0;
    produkt = 1;

    for (int i = 1; i <= N; i++) {
        suma += i;
        produkt *= i;
    }
}

int main() {
    int N;
    cout << "Unesite N: ";
    cin >> N;

    int suma = Suma(N);
    long long int produkt = Produkt(N);

    cout << "\nRezultati funkcija Suma i Produkt:" << endl;
    cout << "Suma = " << suma << endl;
    cout << "Produkt = " << produkt << endl;

    int sumaPtr;
    long long int produktPtr;

    SumaProduktPtr(N, &sumaPtr, &produktPtr);

    cout << "\nRezultati funkcije SumaProduktPtr:" << endl;
    cout << "Suma = " << sumaPtr << endl;
    cout << "Produkt = " << produktPtr << endl;

    int sumaRef;
    long long int produktRef;

    SumaProdukt(N, sumaRef, produktRef);

    cout << "\nRezultati funkcije SumaProdukt (reference):" << endl;
    cout << "Suma = " << sumaRef << endl;
    cout << "Produkt = " << produktRef << endl;

    return 0;
}