#include <iostream>
#include "Point.h"
#include "Point.cpp"

int main() {
    point p = point(2, 4, 5);
    std :: cout << "les coordonnees de p sont :" 
                << p.getX() << ", "
                << p.getY() << ", "
                << p.getZ() << std :: endl;
    return 0;

}
