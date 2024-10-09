#include<bits/stdc++.h>
using namespace std;

class Calculator
{
    private:
        int status;
       
        int get()
        {
            return status;
        }
        void set(int x)
        {
            status = x;
        }

    public:
        Calculator() : status(0){}
        void add(int x)
        {
            status+=x;
        }
        void sub(int x)
        {
            status-=x;
        }
        void multiply(int x)
        {
            status *= x;
        }
        void divideBy(int x)
        {
            if (x == 0)
            {
                cout<<"Invalid arithmetic operation\n";
            }
        }
        void display()
        {
            cout<<"Calculator display: "<<get()<<"\n";
        }
        void clear()
        {
            set(0);
        }
        ~Calculator()
        {
            cout<<"0\nDestructor of the calculator object is called\n";
        }
        

    

};

int main()
{
    Calculator c;
    c.add(7);
    c.display();
    c.multiply(3);
    c.display();
    c.divideBy(0);
    c.display();
    c.add(10);
    c.display();
    c.clear();
    c.display();
}