#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
    int polje[10];
    int n = argc - 1;

    if (n > 10) n = 10;

    for (int i = 0; i < n; i++) {
        string s = argv[i + 1];
        polje[i] = stoi(s);
    }

    for (int i = 0; i < n; i++) {
        polje[i] = polje[i] * polje[i];
        cout << polje[i] << " ";
    }

    return 0;
}
