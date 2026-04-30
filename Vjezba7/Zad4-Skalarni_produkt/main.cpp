#include <iostream>
#include <vector>

int operator*(const std::vector<int>& a, const std::vector<int>& b) {
    int rezultat = 0;
    for (int i = 0; i < a.size(); i++) {
        rezultat += a[i] * b[i];
    }
    return rezultat;
}

int main() {
    int n;
    std::cout << "Unesite n: ";
    std::cin >> n;

    std::vector<int> a(n), b(n);

    std::cout << "Unesite " << n << " komponenti prvog vektora: ";
    for (int i = 0; i < n; i++) std::cin >> a[i];

    std::cout << "Unesite " << n << " komponenti drugog vektora: ";
    for (int i = 0; i < n; i++) std::cin >> b[i];

    std::cout << "Skalarni produkt: " << (a * b) << "\n";

    return 0;
}
