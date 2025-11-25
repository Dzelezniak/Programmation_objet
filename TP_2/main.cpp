#include <iostream>     // importe la bibliothèque 'iostream' qui permet d'utiliser les fonctions pour input/output (ex: 'cin' et 'cout', et donc de pouvoir print des choses dans la console)
#include "Point.h"
#include "Point.cpp"

int main() {
    point p = point(2, 4, 5);   // 
    std :: cout << "les coordonnees de p sont :" 
                << p.getX() << ", "
                << p.getY() << ", "
                << p.getZ() << std :: endl;
    return 0;

}
