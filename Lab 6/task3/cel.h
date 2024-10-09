#ifndef CEL_H
#define CEL_h

class Celsius
{
     float temp;
    float absZero = 0;

    public:

    Celsius();
    Celsius(float);
    ~Celsius();

    void assign(float);
    void display();
};

#endif