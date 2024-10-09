#include<bits/stdc++.h>

#include"coordinate.h"

using namespace std;



void sort (Coordinate c[], int size)
{
    for (int i=0; i<size; i++)
    {
        for(int j=i+1; j< size; j++)
        {
            if(c[i] > c[j])
            {
                Coordinate temp;
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }

        }
    }
}

void randomassign( Coordinate c[], int size)
{
    srand(time(NULL));
    for(int i=0; i<size; i++)
    {
        float a = static_cast<float> (rand()) * 1/3;
        float b = static_cast<float> (rand()) * 1/3;
        c[i] = Coordinate(a,b);
    }
}

void highest( Coordinate c[], int size)
{
    sort(c, size);
    cout<<"Highest : ";
    c[size-1].display();
}

void lowest(Coordinate c[], int size)
{
    sort(c, size);
    cout<<"Lowest : ";
    c[0].display();
}

int main()
{
    Coordinate c[10];
    randomassign(c, 10);
    sort(c,10);
    for(int i=0; i<10; i++)
    {
        c[i].display();
    }
    highest(c,10);
    lowest(c,10);
}