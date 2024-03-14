#include <iostream>
#include <string>
using namespace std;
bool check(string str){
    if (str[10]!= '\0' || str[9]=='\0'){
        return false;
    }
    if (int(str[0])<65 || int(str[0])>90){
        return false;
    }
    if(str[1]!='1' && str[1]!='2'){
        return false;
    }
    return true;
}

int main(){
    char str[15];

    cout<<"plaese enter your number: ";
    cin.getline(str, 15);
    cout<<"Input: "<<str<<endl;
    
    if (check(str)){
        cout<<"Correct!!!"<<endl;
    }else{
        cout<<"Incorrect!!!"<<endl;
    }
    
}