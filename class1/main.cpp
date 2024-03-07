#include <iostream>
using namespace std;

class Human{
    char name[10];
public:
    void SetName(){
    cin >> name;
};
    void Say(){
    cout << "Hello" << name << endl;
};
};
/*
void Human:: Say(){
    cout << "Hello" << name << endl;
}


void Human:: SetName(){
    cin >> name;
}
*/
int main(){
    Human Adan;
    Adan.SetName();
    Adan.Say();
    return 0;
}