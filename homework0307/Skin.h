#ifndef SKIN_H
#define SKIN_H

#include <string>
using namespace std;

class Skin{
    string chaName;
    string skinName;
    int cost;
    int isSolded;
    string code;
public:
    int getFunction(int m);
    void setFunction(string t, int a, string name, int c);
    void printFunction();
};

#endif