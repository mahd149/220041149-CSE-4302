#ifndef FAR_H
#define FAR_H


class Fahrenheit
{
     float temp;
    float absZero = 0;

    public:

    Fahrenheit();
    Fahrenheit(float);
    ~Fahrenheit();

    void assign(float);
    void display();
};

#endif