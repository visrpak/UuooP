#include <iostream>
#include "Koordinata.h"

using namespace std;

int main() {
    Koordinata k1, k2;

    cin >> k1;
    cin >> k2;

    cout << "k1 = " << k1 << endl;
    cout << "k2 = " << k2 << endl;

    Koordinata zbroj = k1 + k2;
    Koordinata razlika = k1 - k2;

    cout << "Zbroj: " << zbroj << endl;
    cout << "Razlika: " << razlika << endl;

    if (k1 == k2)
        cout << "Koordinate su jednake\n";
    else
        cout << "Koordinate nisu jednake\n";

    k1.pomak(2, 3);
    cout << "k1 nakon pomaka: " << k1 << endl;

    return 0;
}