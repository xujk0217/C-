#include<iostream>
#include<string>
using namespace std;

template <typename T>

T max(T a, T b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}

int main(){
    cout << max(1, 2) << endl;
    cout << max(1.1, 2.2) << endl;
    cout << max('a', 'b') << endl;
    cout << max("abc", "def") << endl;
    return 0;
}