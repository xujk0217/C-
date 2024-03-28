#ifndef MAREIX_H
#define MAREIX_H

class matrix{
public:
    float matrixa[3][3];
    int num;
    int isSingle;
    matrix(int a);
    matrix(float, float, float, float);
    matrix(float, float, float, float, float, float, float, float, float);
    void setMatrix(float, float, float, float);
    void setMatrix(float, float, float, float, float, float, float, float, float);
    void showMatrix(matrix, int);
    static void add(matrix*, matrix*);
    static void sub(matrix*, matrix*);
    static void multiple(matrix*, matrix*);
    static void divide(matrix*, matrix*);
    matrix inverMatrix(matrix, int);
};

#endif