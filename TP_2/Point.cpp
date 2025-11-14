#include "Point.h"
#include <iostream>

// Constructeurs 
point :: point(int a, int b, int c) {
    this-> x = a;
    this-> y = b;
    this-> z = c;
};

point :: recopie()

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