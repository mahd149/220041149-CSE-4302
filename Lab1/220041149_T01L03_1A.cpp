#include<bits/stdc++.h>
using namespace std;

class Counter
{
    int Count;
    int incrementBy;


public:
    void setIncrementStep(int n)
    {
        incrementBy = n;
    }
    int getCount()
    {
        return Count;
    }
    void increment()
    {
        Count+= incrementBy;
    }
    void resetCount()
    {
        Count =0;
    }
    Counter() : Count(0), incrementBy(1){}
};

int main()
{
    Counter c;
    c.setIncrementStep(2);
    c.increment();
    cout<<"counter : "<<c.getCount()<<endl;
    c.increment();
    cout<<"counter : "<<c.getCount()<<endl;
    c.setIncrementStep(3);
    c.increment();
    cout<<"counter : "<<c.getCount()<<endl;
    c.resetCount();
    cout<<"counter : "<<c.getCount()<<endl;

}