#include <iostream>
#include <string>
#include "Skin.h"
using namespace std;


void Skin::printFunction(){
    if(isSolded == 0){
        cout<<"  "<<skinName<<": "<<cost;
    }else{
        cout<<"  "<<skinName<<": "<<"Sold Out";
    }
}



int Skin::getFunction(int m){
    if(isSolded == 1){
        cout<<"No, you already have this!";
        cout<<endl;
    }else{
        int mm = m;
        m-=cost;
        if(m<0){
            cout<<"you don't have enough money!!";
            cout<<endl;
            return mm;
        }
        isSolded = 1;
        cout<<"Yes, you have skin <"<<skinName<<"> now !!";
        cout<<endl;
    }
    return m;
}

void Skin::setFunction(string t, int a, string name, int c){
    if(a == 1){
        chaName = "character 1";
    }else if(a == 2){
        chaName = "character 2";
    }else if(a == 3){
        chaName = "character 3";
    }
    code = t;
    skinName = t+"."+name;

    cost = c;

    isSolded = 0;

}
