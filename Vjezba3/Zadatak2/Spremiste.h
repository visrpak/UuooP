#ifndef SPREMISTE_H
#define SPREMISTE_H

#include "Proizvod.h"

class Spremiste {
private:
    Proizvod* proizvodi;
    int kapacitet;
    int broj;

    void prosiri();

public:
    Spremiste();
    ~Spremiste();

    void dodajProizvod();
    void pregled() const;
    void analiza() const;
};

#endif