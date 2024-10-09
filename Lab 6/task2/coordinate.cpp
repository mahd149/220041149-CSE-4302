#include<bits/stdc++.h>
#include"coordinate.h"

using namespace std;

Coordinate::Coordinate (): x(0), y(0) { }
Coordinate::Coordinate(float a,float b) : x(a), y(b) { }

Coordinate::~Coordinate() {}

void Coordinate::display()
{
    cout<<"X = "<<x<<" Y = "<<y<<" Dist = "<<getDistance()<<endl;
}

float Coordinate::operator - (Coordinate c2)
{
  
    float d = sqrt((x - c2.x)*(x - c2.x)+(y-c2.y)*(y-c2.y));
    return d;
}

float Coordinate::getDistance() const
{
     float d = sqrt((x - 0)*(x - 0)+(y-0)*(y-0));
    return d;
}

void Coordinate::move_x(float val)
{
    x += val;
}
void Coordinate::move_y(float val)
{
    y += val;
}

void Coordinate:: move(float x_val, float y_val)
{
     x += x_val;
     y += y_val;
}

bool Coordinate::operator > ( Coordinate& c ) const
{
    return (getDistance() > c.getDistance());

}

bool Coordinate::operator < ( Coordinate& c ) const
{
    return (getDistance() < c.getDistance());

}

bool Coordinate::operator >= ( Coordinate& c ) const
{
    return (getDistance() >= c.getDistance());

}

bool Coordinate::operator <= ( Coordinate& c ) const
{
    return (getDistance() <= c.getDistance());

}

bool Coordinate::operator == ( Coordinate& c ) const
{
    return (getDistance() == c.getDistance());

}

bool Coordinate::operator != ( Coordinate& c ) const
{
    return (getDistance() != c.getDistance());

}
