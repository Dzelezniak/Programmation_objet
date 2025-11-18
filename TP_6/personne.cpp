#include "personne.h"
#include <iostream>
#include <string>

personne :: personne(string n, string p) {
    this-> nom = n;
    this-> prenom = p;
    this-> adresse = "";    // adresse et tel sont mis par défaut à la chaîne vide 
    this-> tel = "";
};

// Getters
string personne :: getnom() const {
    return nom;
};

string personne :: getprenom() const {
    return prenom;
};

string personne :: getadresse() const {
    return adresse;
};

string personne :: gettel() const {
    return tel
}

// Setters
void personne :: setnom(string nom1) {
    this-> nom = nom1;
};

void personne :: setprenom(string prenom1) {
    this-> prenom = prenom1;
};

void personne :: setadresse(string adresse1) {
    this-> adresse = adresse1;
};

void personne :: settel(string tel1) {
    this-> tel = tel1;
};

