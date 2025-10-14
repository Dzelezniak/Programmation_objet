#include "Point.h"
#include <iostream>

// Constructeurs 
point :: point(int a, int b, int c) {
    this-> x = a;
    this-> y = b;
    this-> z = c;
}

// Getters
int point :: getX() const {
    return x;
}

int point :: getY() const {
    return y;
}

int point :: getZ() const {
    return z;
}