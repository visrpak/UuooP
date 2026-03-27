#ifndef PROIZVOD_H
#define PROIZVOD_H

#include <string>
using namespace std;

class Proizvod {
private:
    string naziv;
    double nabavna;
    double prodajna;

public:
    Proizvod();

    void unos();
    void ispis() const;

    double zarada() const;
    double postotak() const;

    double getNabavna() const;
    string getNaziv() const;
};

#endif