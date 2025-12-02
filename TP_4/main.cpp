#include "Date.h"
#include "Date.cpp"
#include <iostream>     // importe la bibliothèque 'iostream' qui permet d'utiliser les fonctions pour input/output (ex: 'cin' et 'cout', et donc de pouvoir print des choses dans la console)
using namespace std;    // permet de ne pas ajouter à chaque fois 'std' lorsqu'on veut print un message

int main() {
    date d = date() ;
    d.setannee(2001);
    d.affiche();
    return 0;
};

