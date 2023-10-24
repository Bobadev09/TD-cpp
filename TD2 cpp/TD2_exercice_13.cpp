/*fichier  d entete point.h */
#ifndef POINT_H
#define POINT_H

class Point {
private:
    float x;
    float y;

public:
    Point(float _x, float _y);  // Constructeur
    void deplace(float dx, float dy);
    void affiche() const;
};

#endif


/*fichier  source  point.cpp */


#include "point.h"
#include <iostream>
using namespace std;

Point::Point(float _x, float _y) : x(_x), y(_y) {}

void Point::deplace(float dx, float dy) {
    x += dx;
    y += dy;
}

void Point::affiche() const {
    cout << "Point(" << x << ", " << y << ")" << endl;
}

#include "point.h"
#include <iostream>
using namespace std;

int main() {
    Point p(3.0, 4.0);  // Crée un point (3.0, 4.0)

    cout << "Point initial : ";
    p.affiche();

    p.deplace(2.0, -1.0);  // Déplace le point de (2.0, -1.0)

    cout << "Point après déplacement : ";
    p.affiche();

    return 0;
}

