#include <iostream>
#include <string>
using namespace std;

void spoji(string a, string b, string &rezultat) {
    rezultat = a + b;
}

int main() {
    string s1 = "Ovo ";
    string s2 = "je spojeno";
    string rez;

    spoji(s1, s2, rez);

    cout << rez << endl;

    return 0;
}
