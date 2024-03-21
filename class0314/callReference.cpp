#include <iostream>
using namespace std;

void func(int a, int &b){
    b = 100;
    cout<< a << " " << b << endl;
}

int main(){
    int a = 10;
    func(a, a);
    cout << a << endl;
}