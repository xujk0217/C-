#include <iostream>
using namespace std;

int main(){
    int a[5] = {1, 2, 3, 4, 5};
    //a is the address of the first element
    cout << a << endl;
    //&a[0] is the address of the first element
    cout << &a[0] << endl;
    //a[0] is the first element
    cout << a[0] << endl;
    //*a is the first element
    cout << *a << endl;
    //a+1 is the address of the second element
    cout << a[1] << endl;
    cout << *(a+1) << endl;
    //a+1 is the address of the second element
    cout << a+1 << endl;
    //a+2 is the address of the third element
    cout << a[2] << endl;
    cout << *(a+2) << endl;
    //a+3 is the address of the fourth element
    cout << a[3] << endl;
    cout << *(a+3) << endl;
    //a+4 is the address of the fifth element
    cout << a[4] << endl;
    cout << *(a+4) << endl;
    return 0;
}