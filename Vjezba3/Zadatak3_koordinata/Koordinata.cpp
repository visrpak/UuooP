#include "Koordinata.h"

Koordinata::Koordinata() {
    x = 0;
    y = 0;
}

Koordinata::Koordinata(int x, int y) {
    this->x = x;
    this->y = y;
}

int Koordinata::getX() const { return x; }
int Koordinata::getY() const { return y; }

void Koordinata::setX(int x) { this->x = x; }
void Koordinata::setY(int y) { this->y = y; }

void Koordinata::pomak(int dx, int dy) {
    x += dx;
    y += dy;
}

// operator +
Koordinata Koordinata::operator+(const Koordinata& k) const {
    return Koordinata(x + k.x, y + k.y);
}

// operator -
Koordinata Koordinata::operator-(const Koordinata& k) const {
    return Koordinata(x - k.x, y - k.y);
}

// operator ==
bool Koordinata::operator==(const Koordinata& k) const {
    return x == k.x && y == k.y;
}

// input
istream& operator>>(istream& in, Koordinata& k) {
    cout << "Unesite x i y: ";
    in >> k.x >> k.y;
    return in;
}

// output
ostream& operator<<(ostream& out, const Koordinata& k) {
    out << "(" << k.x << ", " << k.y << ")";
    return out;
}