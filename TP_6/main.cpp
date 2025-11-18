#include <iostream>
#include <string>
#include "personne.cpp"
#include "personne.h"
using namespace std;

int main() {
    
    personne Ad = personne("Adrien", "Tin");
    Ad.affiche();

    return 0;
}