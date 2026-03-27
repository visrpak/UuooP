#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string jmbg;
    cout << "Unesite JMBG: ";
    cin >> jmbg;

    string dan = jmbg.substr(0, 2);
    string mjesec = jmbg.substr(2, 2);
    string godina = jmbg.substr(4, 3);

    cout << "Datum rodenja znak po znak: ";
    cout << dan[0] << dan[1] << ".";
    cout << mjesec[0] << mjesec[1] << ".";
    cout << godina[0] << godina[1] << godina[2] << endl;

    int zbroj = 0;

    zbroj += dan[0] - '0';
    zbroj += dan[1] - '0';
    zbroj += mjesec[0] - '0';
    zbroj += mjesec[1] - '0';
    zbroj += godina[0] - '0';
    zbroj += godina[1] - '0';
    zbroj += godina[2] - '0';

    cout << "Zbroj znamenki datuma rodenja kao broj: " << zbroj << endl;

    stringstream ss;
    ss << zbroj;
    string zbrojString = ss.str();

    cout << "Zbroj znamenki datuma rodenja kao znakovni niz: " << zbrojString << endl;

    return 0;
}


/*
#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string jmbg;
    std::cout << "Unesite JMBG: ";
    std::cin >> jmbg;

    std::string dan = jmbg.substr(0, 2);
    std::string mjesec = jmbg.substr(2, 2);
    std::string godina = jmbg.substr(4, 3);

    std::cout << "Datum rodenja znak po znak: ";
    std::cout << dan[0] << dan[1] << ".";
    std::cout << mjesec[0] << mjesec[1] << ".";
    std::cout << godina[0] << godina[1] << godina[2] << std::endl;

    int zbroj = 0;

    zbroj += dan[0] - '0';
    zbroj += dan[1] - '0';
    zbroj += mjesec[0] - '0';
    zbroj += mjesec[1] - '0';
    zbroj += godina[0] - '0';
    zbroj += godina[1] - '0';
    zbroj += godina[2] - '0';

    std::cout << "Zbroj znamenki datuma rodenja kao broj: " << zbroj << std::endl;

    std::stringstream ss;
    ss << zbroj;
    std::string zbrojString = ss.str();

    std::cout << "Zbroj znamenki datuma rodenja kao znakovni niz: " << zbrojString << std::endl;

    return 0;
}

*/
