#include <iostream>
#include "Human.h"
using namespace std;

void Human:: Say(){
    cout << "Hello" << name << endl;
}

void Human:: SetName(){
    cin >> name;
}
