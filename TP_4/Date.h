#ifndef DATE_H
#define DATE_H

class date {
    private:    // partie privée = contient les attributs; méthodes; ...
        // Les attributs
        int jour;
        int mois;
        int annee;

        void Bool_checkDate(int j, int m, int a) ;

    public: // partie public = contient constructeurs; méthodes; getters; ...      
        // Constructeurs
        date_par_defaut();
        date(int j, int m, int a);
        
        // Méthodes public
        void affiche() ;
        
        // Getters (on met 'const' avec les getters, c'est pour ne pas modifier les attributs de l'objet sur lequel on applique la méthode)
        int getjour() const;
        int getmois() const;
        int getannee() const;

        // Setters
        void setjour(int j);
        void setmois(int m);
        void setannee(int a);
};

#endif 