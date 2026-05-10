#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

int main() {
   
    std::map<std::string, int> wordcount;
    std::ifstream file("tekst.txt");
    std::string rijec;

    while (file >> rijec) {
        wordcount[rijec]++;
    }

    std::cout << "=== Sve rijeci ===\n";
    for (std::map<std::string, int>::iterator it = wordcount.begin(); it != wordcount.end(); ++it) {
        std::cout << it->first << ": " << it->second << "\n";
    }

    
    std::vector<std::pair<std::string, int>> vec(wordcount.begin(), wordcount.end());

    std::sort(vec.begin(), vec.end(),
        [](const std::pair<std::string, int>& a, const std::pair<std::string, int>& b) {
            return a.second > b.second;
        });

    std::cout << "\n=== Top 10 ===\n";
    int limit = std::min(10, (int)vec.size());
    for (int i = 0; i < limit; ++i) {
        std::cout << vec[i].first << ": " << vec[i].second << "\n";
    }

    return 0;
}