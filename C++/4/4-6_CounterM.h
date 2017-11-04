#ifndef COUNTERM_H_INCLUDED
#define COUNTERM_H_INCLUDED

class CounterM {
    const int maxValue;
    int value;

public :
    CounterM(int mVal) : maxValue(mVal+1), value(0) {}

    void reset() {
        value=0;
    }

    void count() {
        value = (value+1) % maxValue;
    }   

    void countDown() {
        value = (value-1) % maxValue; 
        if (value==-1) value=10;s
    }   

    int getValue() const {
        return value;
    }
};

#endif
