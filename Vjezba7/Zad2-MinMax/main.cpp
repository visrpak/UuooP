#include <iostream>
#include <list>

int main() {
    std::list<int> brojevi;
    int broj;

    std::cout << "Unesite brojeve (Ctrl+Z+Enter || Ctrl+D za kraj):\n";
    while (std::cin >> broj) {
        brojevi.push_back(broj);
    }

    int min = brojevi.front();
    int max = brojevi.front();

    for (const int& b : brojevi) {
        if (b < min) min = b;
        if (b > max) max = b;
    }

    std::cout << "Minimum: " << min << "\n";
    std::cout << "Maximum: " << max << "\n";

    return 0;
}
