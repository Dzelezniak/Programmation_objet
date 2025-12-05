#ifndef POINT_H
#define POINT_H

class point {
    private:    // Attributs
        int x;
        int y;
        int z;

    public:
        // Constructeurs (Rem.: TOUS les constructeurs d'une classe doivent avoir le même nom que celui de la classe)
        point(int a, int b, int c); // constructeur 'classique'
        point();    // constructeur par défaut
        point(const point& p); // contructeur recopie
        
        
        // Getters
        int getX() const;
        int getY() const;
        int getZ() const;

        // Setters
        void setX(int X);
        void setY(int Y);
        void setZ(int Z);
};

#endif 