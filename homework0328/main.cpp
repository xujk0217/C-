#include <iostream>
#include "matrix.h"
using namespace std;

int main(){
    int num;
    cout << "Enter the size of the matrix: ";
    cin >> num;
    matrix m1(num);
    matrix m2(num);
    if(num == 2){
            int a, b, c, d;
            cout << "Enter the elements of the first matrix: ";
            cin >> a >> b >> c >> d;
            m1.setMatrix(a, b, c, d);
            cout << "Enter the elements of the second matrix: ";
            cin >> a >> b >> c >> d;
            m2.setMatrix(a, b, c, d);
    }else{
            int a, b, c, d, e, f, g, h, i;
            cout << "Enter the elements of the first matrix: ";
            cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;
            m1.setMatrix(a, b, c, d, e, f, g, h, i);
            cout << "Enter the elements of the second matrix: ";
            cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;
            m2.setMatrix(a, b, c, d, e, f, g, h, i);
        }
    while(num == 2 || num == 3){
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        int choice;
        cin >> choice;
        switch(choice){
            case 1:
                if(num == 2){
                    matrix::add(&m1, &m2);
                }else{
                    matrix::add(&m1, &m2);
                }
                break;
            case 2:
                if(num == 2){
                    matrix::sub(&m1, &m2);
                }else{
                    matrix::sub(&m1, &m2);
                }
                break;
            case 3:
                if(num == 2){
                    matrix::multiple(&m1, &m2);
                }else{
                    matrix::multiple(&m1, &m2);
                }
                break;
            case 4:
                if(num == 2){
                    matrix::divide(&m1, &m2);
                }else{
                    matrix::divide(&m1, &m2);
                }
                break;
            case 5:
                return 0;
            case 6:
                matrix result = m1.inverMatrix(m1, 2);
                result.showMatrix(result, 2);
                break;
        }
    }
}