#ifndef DATE_H
#define DATE_H

class date {
    private: 
        int jour;
        int mois;
        int annee;

    public:
        // Constructeurs
        date(int a, int b, int c);
        
        // Getters
        int getX() const;
        int getY() const;
        int getZ() const;

};

#endif 