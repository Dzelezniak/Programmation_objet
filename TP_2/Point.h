#ifndef POINT_H
#define POINT_H

class point {
    private: 
        int x;
        int y;
        int z;

    public:
        // Constructeurs
        point(int a, int b, int c);
        
        // Getters
        int getX() const;
        int getY() const;
        int getZ() const;

        // Setters
        void setX(int x);
        void setY(int y);
        void setZ(int z);
};

#endif 