#ifndef COUNTER_H
#define COUNTER_H

class Counter
{
    int count;
    int step;

    public :
    
    Counter () ;
    ~Counter();

    void setincrementstep(int step_val);
    void increment();
    int getCount() const;
    void resetCount(int step );

    bool operator > (const Counter&) const;
    bool operator < (const Counter&) const;
    bool operator >= (const Counter&) const ;
    bool operator  <= (const Counter&) const;
    bool operator == (const Counter&) const;
    bool operator != (const Counter&) const;

    Counter operator += (const Counter&) ;
    Counter operator ++();
    Counter operator ++(int);

    Counter operator + (const Counter&) const;
    
};

#endif