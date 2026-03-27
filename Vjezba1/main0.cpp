#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    const char* ulaz = "Viktor Srpak 2006";
    char ime[50], prezime[50];
    int godina;

    sscanf(ulaz, "%s %s %d", ime, prezime, &godina);

    char izlaz[100];

    sprintf(izlaz, "\nIme: %s, \nPrezime: %s, \nGodina: %d\n", ime, prezime, godina);

    cout << ulaz << endl;
    cout << izlaz << endl;

    return 0;
}
