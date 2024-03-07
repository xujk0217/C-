#include <iostream>
#include "Card.h"
using namespace std;

Card::Card(int f){
    flower = f;
}

void Card::printFloO(){
    if(flower == 1){
        cout<<"         0         ";
    }else if(flower == 2){
        cout<<"       0   0       ";
    }else if(flower == 3){
        cout<<"         0         ";
    }else if(flower == 4){
        cout<<"        000        ";
    }
}
void Card::printFloS(){
    if(flower == 1){
        cout<<"        000        ";
    }else if(flower == 2){
        cout<<"      000 000      ";
    }else if(flower == 3){
        cout<<"       00000       ";
    }else if(flower == 4){
        cout<<"      00 0 00      ";
    }
}
void Card::printFloT(){
    if(flower == 1){
        cout<<"       00000       ";
    }else if(flower == 2){
        cout<<"      0000000      ";
    }else if(flower == 3){
        cout<<"      0000000      ";
    }else if(flower == 4){
        cout<<"      0000000      ";
    }
}
void Card::printFloF(){
    if(flower == 1){
        cout<<"       00000       ";
    }else if(flower == 2){
        cout<<"        000        ";
    }else if(flower == 3){
        cout<<"       00000       ";
    }else if(flower == 4){
        cout<<"      00 0 00      ";
    }
}
void Card::printFloFi(){
    if(flower == 1){
        cout<<"         0         ";
    }else if(flower == 2){
        cout<<"         0         ";
    }else if(flower == 3){
        cout<<"         0         ";
    }else if(flower == 4){
        cout<<"         0         ";
    }
}

void Card::printNumO(int n){
    if(n > 9){
        cout<<n<<"               "<<n;
    }else{
        cout<<n<<"                 "<<n;
    }
}
void Card::printNumS(int n){
    if(n > 9){
        cout<<n<<n<<"           "<<n<<n;
    }else{
        cout<<n<<n<<"               "<<n<<n;
    }
}
void Card::printNumT(int n){
    if(n > 9){
        cout<<n<<n<<n<<"       "<<n<<n<<n;
    }else{
        cout<<n<<n<<n<<"             "<<n<<n<<n;
    }
}