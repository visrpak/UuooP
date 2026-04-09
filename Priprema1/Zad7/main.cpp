#include <iostream>
using namespace std;

class EUredaj {
public:
    virtual void ispis() = 0;
};

class Tipkovnica : public EUredaj {
public:
    void ispis() {
        cout << "Tipkovnica" << endl;
    }
};

class Monitor : public EUredaj {
public:
    void ispis() {
        cout << "Monitor" << endl;
    }
};

int main() {
    Tipkovnica t;
    Monitor m;

    EUredaj* p1 = &t;
    EUredaj* p2 = &m;

    p1->ispis();
    p2->ispis();

    return 0;
}
