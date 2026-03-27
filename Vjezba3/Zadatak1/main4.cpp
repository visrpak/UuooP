#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class JMBG {
private:
    string jmbg;

public:
    friend istream& operator>>(istream& in, JMBG& j) {
        cout << "Unesite JMBG: ";
        in >> j.jmbg;
        return in;
    }

    friend ostream& operator<<(ostream& out, const JMBG& j) {
        string dan = j.jmbg.substr(0, 2);
        string mjesec = j.jmbg.substr(2, 2);
        string godina = j.jmbg.substr(4, 3);

        out << dan << "." << mjesec << "." << godina << endl;

        int zbroj = 0;
        for (char c : dan + mjesec + godina)
            zbroj += c - '0';

        out << "Zbroj: " << zbroj << endl;

        stringstream ss;
        ss << zbroj;
        out << "String: " << ss.str();

        return out;
    }
};

int main() {
    JMBG j;
    cin >> j;
    cout << j;
}