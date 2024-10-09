#include "counter.h"
#include <bits/stdc++.h>

using namespace std;

Counter::Counter() : count(0), step(1) { }

Counter::~Counter() {}

void Counter::setincrementstep(int step_val)
{
   if (count == 0) {
            if (step_val > 0) {
                step = step_val;
            } else {
                cout << "Cannot assign negative increment step, keeping previous value." << endl;
            }
        } else {
            cout << "Cannot set increment step because count is not zero." << endl;
        }
}

void Counter::increment()
{
    count++;
}
int Counter::getCount() const
{
    return count;
}
void Counter::resetCount(int step )

{
    count = 0;
        if (step > 0) {
            step = step;
        } else 
         step = 1; 
    
}

bool Counter::operator>(const Counter& c2) const
{
    return (count > c2.count) ? true : false;
}

bool Counter::operator<(const Counter& c2) const
{
    return (count < c2.count) ? true : false;
}

bool Counter::operator>=(const Counter& c2) const

{
    return (count >= c2.count) ? true : false;
}

bool Counter::operator<=(const Counter& c2) const
{
    return (count <= c2.count) ? true : false;
}

bool Counter::operator==(const Counter& c2) const
{
    return (count == c2.count) ? true : false;
}

bool Counter::operator!=(const Counter& c2) const
{
    return (count != c2.count) ? true : false;
}

Counter Counter:: operator += (const Counter& c2) 
{
    if (this->step == c2.step) {
            this->count += c2.count;
        } else {
            cout << "Increment steps are not the same. Cannot add." << endl;
        }
        return *this;
}
Counter Counter:: operator++()
{
    this->increment();
    return *this;

}
Counter Counter::operator++(int)
{
    Counter temp = *this;
   
    this->increment();
    return temp;

}


Counter Counter::operator + ( const Counter& c2) const
{
    Counter temp;
    if ( this->step == c2.step)
    {
        temp.count = this->count + c2.count;
        temp.step = c2.step;
    }
    else 
    {
        cout << "Increment steps are not the same. Cannot add." << endl; 
    }
    return temp;
}