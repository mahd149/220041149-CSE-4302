#include<bits/stdc++.h>
#include "counter.h"

using namespace std;

int main()
{
    Counter c1, c2,c3;
    c1.increment();
    c2++;

    cout<<"\nc1 :"<<c1.getCount();
    cout<<"\nc2 :"<<c2.getCount();
    cout<<"\nc3 :"<<c3.getCount();


    c3 = c1 + c2;

    cout<<"\nc1 :"<<c1.getCount();
    cout<<"\nc2 :"<<c2.getCount();
    cout<<"\nc3 :"<<c3.getCount();

    c1++;
    c3 = ++c1;

    cout<<"\nc1 :"<<c1.getCount();
    cout<<"\nc2 :"<<c2.getCount();
    cout<<"\nc3 :"<<c3.getCount();



}