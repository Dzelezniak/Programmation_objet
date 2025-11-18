#ifndef PERSONNE_H
#define PERSONNE_H
#include <string>   // importe la bibliothèque string
#include <iostream>
using namespace std;

class personne {
    private:    // Attributs
        string nom;
        string prenom;
        string adresse;
        string tel;

    public:
        // Constructeurs
        personne(string n, string p);

        // Getters
        string getnom() const;
        string getprenom() const;
        string getadresse() const;
        string gettel() const;

        // Setters
        
        
    

}


#endif