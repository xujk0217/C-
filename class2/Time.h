#ifndef TIME_H
#define TIME_H

class Time{
    int hrs, min, sec;
public:
    Time();
    Time(int h, int m, int s);
    void Increment();
    void SetHrs(int h);
    void SetMin(int m);
    void SetSec(int s);
    void SetTime(int h, int m, int s);
    void PrintTime();
};

#endif
