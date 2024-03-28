#include <iostream>
#include "matrix.h"
using namespace std;


matrix::matrix(int a){
    num = a;
    if(a == 2){
        matrixa[0][0] = 0;
        matrixa[0][1] = 0;
        matrixa[1][0] = 0;
        matrixa[1][1] = 0;
    }else{
        matrixa[0][0] = 0;
        matrixa[0][1] = 0;
        matrixa[0][2] = 0;
        matrixa[1][0] = 0;
        matrixa[1][1] = 0;
        matrixa[1][2] = 0;
        matrixa[2][0] = 0;
        matrixa[2][1] = 0;
        matrixa[2][2] = 0;
    }
}

matrix::matrix(float a, float b, float c, float d){
    num = 2;
    matrixa[0][0] = a;
    matrixa[0][1] = b;
    matrixa[0][2] = '\0';
    matrixa[1][0] = c;
    matrixa[1][1] = d;
}
matrix::matrix(float a, float b, float c, float d, float e, float f, float g, float h, float i){
    num = 3;
    matrixa[0][0] = a;
    matrixa[0][1] = b;
    matrixa[0][2] = c;
    matrixa[1][0] = d;
    matrixa[1][1] = e;
    matrixa[1][2] = f;
    matrixa[2][0] = g;
    matrixa[2][1] = h;
    matrixa[2][2] = i;
}

void matrix::setMatrix(float a, float b, float c, float d){
    num = 2;
    matrixa[0][0] = a;
    matrixa[0][1] = b;
    matrixa[1][0] = c;
    matrixa[1][1] = d;
}

void matrix::setMatrix(float a, float b, float c, float d, float e, float f, float g, float h, float i){
    num = 3;
    matrixa[0][0] = a;
    matrixa[0][1] = b;
    matrixa[0][2] = c;
    matrixa[1][0] = d;
    matrixa[1][1] = e;
    matrixa[1][2] = f;
    matrixa[2][0] = g;
    matrixa[2][1] = h;
    matrixa[2][2] = i;
}

void matrix::showMatrix(matrix m, int a){
    if(a == 2){
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                cout << m.matrixa[i][j] << " ";
                if(j == 1){
                    cout << endl;
                }
            }
        }
    }else{
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                cout << m.matrixa[i][j] << " ";
                if(j == 2){
                    cout << endl;
                }
            }
        }
    }
}
void matrix::add(matrix* m1, matrix* m2){
    if(m1->num == 2){
        matrix result(0, 0, 0, 0);
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                result.matrixa[i][j] = m1->matrixa[i][j] + m2->matrixa[i][j];
            }
        }
        result.showMatrix(result, 2);
    }else{
        matrix result(0, 0, 0, 0, 0, 0, 0, 0, 0);
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                result.matrixa[i][j] = m1->matrixa[i][j] + m2->matrixa[i][j];
            }
        }
        result.showMatrix(result, 3);
    }
}
void matrix::sub(matrix* m1, matrix* m2){
    if(m1->num == 2){
        matrix result(0, 0, 0, 0);
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                result.matrixa[i][j] = m1->matrixa[i][j] - m2->matrixa[i][j];
            }
        }
        result.showMatrix(result, 2);
    }else{
        matrix result(0, 0, 0, 0, 0, 0, 0, 0, 0);
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                result.matrixa[i][j] = m1->matrixa[i][j] - m2->matrixa[i][j];
            }
        }
        result.showMatrix(result, 3);
    }
}
void matrix::multiple(matrix* m1, matrix* m2){
    if(m1->num == 2){
        matrix result(0, 0, 0, 0);
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                for(int k = 0; k < 2; k++){
                    result.matrixa[i][j] += m1->matrixa[i][k] * m2->matrixa[k][j];
                }
            }
        }
        result.showMatrix(result, 2);
    }else{
        matrix result(0, 0, 0, 0, 0, 0, 0, 0, 0);
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                for(int k = 0; k < 3; k++){
                    result.matrixa[i][j] += m1->matrixa[i][k] * m2->matrixa[k][j];
                }
            }
        }
        result.showMatrix(result, 3);
    }
}

void matrix::divide(matrix* m1, matrix* m2){
    matrix rm1 = *m1;
    if(m1->num == 2){
        matrix result = m1->inverMatrix(rm1, 2);
        if(result.isSingle == 1){
            result.showMatrix(result, 2);
        }else{
            matrix::multiple(&result, m2);
        }
    }else{
        matrix result = m1->inverMatrix(*m1, 3);
        if(result.isSingle == 1){
            result.showMatrix(result, 3);
        }else{
            matrix::multiple(&result, m2);
        }
    }
}

matrix matrix::inverMatrix(matrix m, int a){
    if(a == 2){
        isSingle = 0;
        matrix result(0, 0, 0, 0);
        int det = m.matrixa[0][0] * m.matrixa[1][1] - m.matrixa[0][1] * m.matrixa[1][0];
        //cout << "det = " << det << endl;
        if(det == 0){
            result.isSingle = 1;
            return result;
        }
        //cout<<"m.matrixa[1][1] = "<<m.matrixa[1][1]<<endl;
        result.matrixa[0][0] = m.matrixa[1][1] / det;
        //cout<<"result.matrixa[0][0] = "<<result.matrixa[0][0]<<endl;
        //cout<<"m.matrixa[0][0] = "<<m.matrixa[0][0]<<endl;
        result.matrixa[1][1] = m.matrixa[0][0] / det;
        //cout<<"result.matrixa[1][1] = "<<result.matrixa[1][1]<<endl;
        //cout<<"m.matrixa[0][1] = "<<m.matrixa[0][1]<<endl;
        result.matrixa[0][1] = -m.matrixa[0][1] / det;
        //cout<<"result.matrixa[0][1] = "<<result.matrixa[0][1]<<endl;
        //cout<<"m.matrixa[1][0] = "<<m.matrixa[1][0]<<endl;
        result.matrixa[1][0] = -m.matrixa[1][0] / det;
        //cout<<"result.matrixa[1][0] = "<<result.matrixa[1][0]<<endl;
        return result;
    }else{
        isSingle = 0;
        matrix result(0, 0, 0, 0, 0, 0, 0, 0, 0);
        int det = m.matrixa[0][0] * m.matrixa[1][1] * m.matrixa[2][2] + m.matrixa[0][1] * m.matrixa[1][2] * m.matrixa[2][0] + m.matrixa[0][2] * m.matrixa[1][0] * m.matrixa[2][1] - m.matrixa[0][2] * m.matrixa[1][1] * m.matrixa[2][0] - m.matrixa[0][1] * m.matrixa[1][0] * m.matrixa[2][2] - m.matrixa[0][0] * m.matrixa[1][2] * m.matrixa[2][1];
        if(det == 0){
            result.isSingle = 1;
            return result;
        }
        result.matrixa[0][0] = (m.matrixa[1][1] * m.matrixa[2][2] - m.matrixa[1][2] * m.matrixa[2][1]) / det;
        result.matrixa[0][1] = (m.matrixa[0][2] * m.matrixa[2][1] - m.matrixa[0][1] * m.matrixa[2][2]) / det;
        result.matrixa[0][2] = (m.matrixa[0][1] * m.matrixa[1][2] - m.matrixa[0][2] * m.matrixa[1][1]) / det;
        result.matrixa[1][0] = (m.matrixa[1][2] * m.matrixa[2][0] - m.matrixa[1][0] * m.matrixa[2][2]) / det;
        result.matrixa[1][1] = (m.matrixa[0][0] * m.matrixa[2][2] - m.matrixa[0][2] * m.matrixa[2][0]) / det;
        result.matrixa[1][2] = (m.matrixa[0][2] * m.matrixa[1][0] - m.matrixa[0][0] * m.matrixa[1][2]) / det;
        result.matrixa[2][0] = (m.matrixa[1][0] * m.matrixa[2][1] - m.matrixa[1][1] * m.matrixa[2][0]) / det;
        result.matrixa[2][1] = (m.matrixa[0][1] * m.matrixa[2][0] - m.matrixa[0][0] * m.matrixa[2][1]) / det;
        result.matrixa[2][2] = (m.matrixa[0][0] * m.matrixa[1][1] - m.matrixa[0][1] * m.matrixa[1][0]) / det;
        return result;
    }
}