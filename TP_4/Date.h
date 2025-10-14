#ifndef DATE_H
#define DATE_H

class date {
    private:    // partie privée = contient les attributs; méthodes; ...
        int jour;
        int mois;
        int annee;

        void Bool_checkDate(int j, int m, int a);
        
    public: // partie public = contient constructeurs; méthodes; getters; ...      
        // Constructeurs
        date(int a, int b, int c);
        
        // Getters
        int getX() const;
        int getY() const;
        int getZ() const;

};

#endif 