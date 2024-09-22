#include<bits/stdc++.h>
using namespace std;

class Time
{
    int Min;
    int Hour;
    int Sec;

    public:
        Time() : Hour(0), Min(0), Sec(0){}

        int hours() const
        {
            return Hour;
        }
        int min() const
        {
            return Min;
        }
        int seconds() const
        {
            return Sec;
        }
        void reset(int h, int m, int s)
        {
            if(h>=24 || h<0 || m>=60 || m<0 || s>=60 || s<0)
            {
                cout<<"Invalid input\n";
                return ;
            }
            
            
                Hour = h;
                Min = m;
                Sec = s;
            
           
        }
        void advance(int h, int m, int s)
        {
            Sec += s;
            Min += Sec / 60;
            Sec %= 60; 

            Min += m;
            Hour += Min / 60;
            Min %= 60; 

            Hour += h;
            Hour %= 24;
        }
        void print() const
        {
            cout<<Hour<<':'<<Min<<':'<<Sec<<endl;

        }
};

int main()
{
    Time t;
    t.print();
    t.reset(15,30,40);
    t.print();
    t.advance(4,5,6);
    t.print();
    t.reset(78,2,5);

    return 0;


}