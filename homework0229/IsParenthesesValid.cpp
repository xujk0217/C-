#include <iostream>
using namespace std;

int main(){
    char arr[100];
    cin.getline (arr, 100);
    int i = 0;
    int cou = 0;
    while(arr[i] != '\0' || i < 100){
        if(arr[i]=='('){
            cou++;
        }else if(arr[i]==')'){
            cou--;
        }
        if(cou<0){
            break;
        }
        i++;
    }
    if(cou == 0){
        cout<<"valid";
    }else{
        cout<<"invalid";
    }
}