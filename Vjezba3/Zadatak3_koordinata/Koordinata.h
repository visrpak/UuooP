#ifndef KOORDINATA_H
#define KOORDINATA_H

#include <iostream>
using namespace std;

class Koordinata {
private:
    int x, y;

public:
    Koordinata();
    Koordinata(int x, int y);

    int getX() const;
    int getY() const;

    void setX(int x);
    void setY(int y);

    void pomak(int dx, int dy);

    // operatori
    Koordinata operator+(const Koordinata& k) const;
    Koordinata operator-(const Koordinata& k) const;
    bool operator==(const Koordinata& k) const;

    friend istream& operator>>(istream& in, Koordinata& k);
    friend ostream& operator<<(ostream& out, const Koordinata& k);
};

#endif