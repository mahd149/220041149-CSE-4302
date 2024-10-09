#ifndef KEL_H
#define KEL_H

class Kelvin
{
    float temp;
    float absZero = 0;

    public:

    Kelvin();
    Kelvin(float);
    ~Kelvin();

    void assign(float);
    void display();
    
        


};


#endif