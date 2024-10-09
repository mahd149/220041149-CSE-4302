#ifndef COORDINATE_H
#define COORDINATE_H

class Coordinate
{
    float x;
    float y;

    public :
        Coordinate();
        Coordinate(float ex, float why);
        ~Coordinate();

        void display();
        float operator - (Coordinate);
        float getDistance() const;

        void move_x(float );
        void move_y(float );
        void move(float x_val, float y_val);

         bool operator > ( Coordinate& ) const ;
         bool operator < (Coordinate& ) const ;
         bool operator >= ( Coordinate& ) const;
         bool operator <= ( Coordinate& ) const;
         bool operator == ( Coordinate& ) const;
         bool operator != ( Coordinate& ) const;


};

#endif