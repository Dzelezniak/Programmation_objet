#include "Point.h"
#include <iostream>

// Constructeurs 
point :: point(int a, int b, int c) {
    this-> x = a;
    this-> y = b;
    this-> z = c;
};

point :: point_defaut() {
    this-> x = 0;
    this-> y = 0;
    this-> z = 0;
};

point :: recopie(point p) {
    this-> x = p.x;
    this-> y = p.y;
    this-> z = p.z;
}

// Getters
int point :: getX() const {
    return x;
};

int point :: getY() const {
    return y;
};

int point :: getZ() const {
    return z;
};

// Setters
void point :: setX(int X) {
    this-> x = X;
};

void point :: setY(int Y) {
    this-> y = Y;
};

void point :: setZ(int Z){
    this-> z = Z;
};