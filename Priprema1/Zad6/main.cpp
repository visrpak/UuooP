#include <iostream>
#include <string>
using namespace std;

class Vozilo {
public:
    string ime;
    int brojKotaca;

    friend istream& operator>>(istream& in, Vozilo& v) {
        in >> v.ime >> v.brojKotaca;
        return in;
    }

    friend ostream& operator<<(ostream& out, const Vozilo& v) {
        out << v.ime << " " << v.brojKotaca;
        return out;
    }
};

int main() {
    Vozilo v1, v2;

    cin >> v1 >> v2;

    cout << v1 << endl;
    cout << v2 << endl;

    return 0;
}
