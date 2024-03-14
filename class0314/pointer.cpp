#include <iostream>
using namespace std;

void func(int *p){
    cout << *p << endl;
    *p = 100;
}

int main(){
    int a = 10;
    //pointer to a
    int *p = &a;
    cout << *p << endl;
    func(p);
    //a is changed by func
    cout << *p << endl;
    return 0;
}