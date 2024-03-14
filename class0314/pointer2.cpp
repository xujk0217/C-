#include <iostream>
using namespace std;

void func(int a, int **pp){
    a = 10;
    **pp = 100;
    cout << a <<" "<< **pp << endl;
}

int main(){
    int a = 10;
    int *p = &a;
    int **pp = &p;
    func(a, pp);
    cout << a <<" "<< **pp << endl;

    if(a == **pp)
        cout << "a and **pp are the same" << endl;
    else
        cout << "a and **pp are different" << endl;
        
    return 0;
}