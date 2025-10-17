#include "Date.h"
#include "Date.cpp"
#include <iostream>
using namespace std;    // permet de ne pas ajouter à chaque fois 'std' lorsqu'on veut print un message

int main() {
    date d = date() ;
    d.setannee(2001);
    d.affiche();
    return 0;
};
