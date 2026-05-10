#include <iostream>
#include <list>

int main() {
    std::list<int> numbers;
    int n;

    while (std::cin >> n) {
        numbers.push_back(n);
    }

    for (std::list<int>::reverse_iterator it = numbers.rbegin(); it != numbers.rend(); ++it) {
        std::cout << *it << "\n";
    }

    return 0;
}