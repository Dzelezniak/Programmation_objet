#include "Date.h"
#include <iostream>
using namespace std;    // permet de ne pas ajouter à chaque fois 'std' lorsqu'on veut print un message


// Constructeurs 
date :: date() {
    this-> jour = 1;
    this-> mois = 1;
    this-> annee = 2000;
};


// Méthodes
void date :: Bool_checkDate(int j, int m, int a) {
    if ((j >= 1 && j <= 31) && (m >= 1 && m <= 12) && (a >= 2000 && a <= 2050)) {
        cout << "les valeurs sont admissibles" << endl;
        this-> jour = j;
        this-> mois = m;
        this-> annee = a;
    };
    this-> jour = 1;
    this-> mois = 1;
    this-> annee = 2000;

};

void date :: affiche() {  // méthode qui affiche la date 
    cout << "aujourd'hui on est le "
                << this-> jour << "/"
                << this-> mois << "/"
                << this-> annee << endl;
};


// Getters
int date :: getjour() const {
    return  this-> jour;
};

int date :: getmois() const {
    return this-> mois;
};

int date :: getannee() const {
    return this-> annee;
};


// Setters
void date :: setjour(int j) {
    this-> jour = j;
};

void date :: setmois(int m) {
    this-> mois = m;
};

void date :: setannee(int a) {
    this-> annee = a;
};