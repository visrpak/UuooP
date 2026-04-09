#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;

    double sredina = (a + b) / 2;

    cout << setw(10) << setprecision(5) << fixed << sredina << endl;

    return 0;
}
