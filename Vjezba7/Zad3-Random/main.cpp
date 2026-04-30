#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(nullptr));
    std::ofstream file("random.txt");

    for (int i = 0; i < 10000; i++) {
        file << std::rand() << "\n";
    }

    file.close();
    return 0;
}
