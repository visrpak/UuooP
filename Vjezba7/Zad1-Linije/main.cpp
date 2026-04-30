#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include <string>

int main() {
    std::vector<std::string> linije;
    std::ifstream file("Proba.txt");
    std::string linija;
    while (std::getline(file, linija)) {
        linije.push_back(linija);
    }
    file.close();

    std::cout << "a) Range-based loop:\n";
    for (const std::string& l : linije) {
        std::cout << l << "\n";
    }

    std::cout << "b) For loop:\n";
    for (int i = 0; i < linije.size(); i++) {
        std::cout << linije[i] << "\n";
    }

    std::cout << "c) Iteratori:\n";
    for (auto it = linije.begin(); it != linije.end(); ++it) {
        std::cout << *it << "\n";
    }

    std::list<std::string> lista(linije.begin(), linije.end());
    std::cout << "d) Lista + range loop:\n";
    for (const std::string& l : lista) {
        std::cout << l << "\n";
    }

    return 0;
}
