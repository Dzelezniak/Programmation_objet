#include "Date.h"

// Constructeurs 
date :: date_par_defaut() {
    this-> jour = 1;
    this-> mois = 1;
    this-> annee = 2000;
}

date :: date(int j, int m, int a) {
    this-> jour = j;
    this-> mois = m;
    this-> annee = a;
}


// Méthodes
void date :: Bool_checkDate(int j, int m, int a) {
    if 1 <= this-> jour <= 31 && 1 <= this-> mois <= 12 && 2000 <= this-> annee <= 2050 {
        std :: cout << "les valeurs sont admissibles" 
                    << std :: endl;
        this-> jour = j;
        this-> mois = m;
        this-> annee = a;
    };

    else {
        this-> jour = 1;
        this-> mois = 1;
        this-> annee = 2000;
    };

}


void affiche() {  // méthode qui affiche la date 
    std :: cout << "aujourd'hui on est le "
                << this-> jour << ", "
                << this-> mois << ", "
                << this-> annee << std :: endl;
}


// Getters
int date :: getjour() const {
    return this-> jour;
}

int date :: getmois() const {
    return this-> mois;
}

int date :: getannee() const {
    return this-> annee;
}


// Setters
void date :: setjour(int j) {
    this-> jour = j;
}

void date :: setmois(int m) {
    this-> mois = m;
}

void date :: setannee(int a) {
    this-> annee = a;
}