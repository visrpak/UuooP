#include <iostream>
#include <map>
#include <sstream> 
#include <string>

int main() {
    std::map<std::string, int> ormarici;
    std::string linija;

    while (std::getline(std::cin, linija)) {
        if (linija.empty()) break;

        std::string ime;
        int broj;
        std::istringstream iss(linija);
        iss >> ime >> broj;

        ormarici[ime] = broj;

        for (std::map<std::string, int>::iterator it = ormarici.begin(); it != ormarici.end(); ++it) {
            std::cout << it->first << " " << it->second << "\n";
        }
    }

    std::string ime;
    while (std::cin >> ime) {
        if (ormarici.count(ime)) {
            std::cout << ormarici[ime] << "\n";
        }
        else {
            std::cout << "Ne postoji: " << ime << "\n";
        }
    }

    return 0;
}