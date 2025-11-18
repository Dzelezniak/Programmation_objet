#ifndef POINT_H
#define POINT_H

class point {
    private:    // Attributs
        int x;
        int y;
        int z;

    public:
        // Constructeurs
        point(int a, int b, int c);
        
        recopie()
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