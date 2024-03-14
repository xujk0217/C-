#ifndef TIME_H
#define TIME_H

class Time{
    int hrs;
    int min;
    int sec;
public:
    Time();
    bool setTime(int);
    bool setTime(int, int, int);
    void showTime();
};
#endif