#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    for(int j = 1; j < 10; j++){
        for(int i = 1; i < 10; i++){
            if(i == j){
                int ans = i * j;
                if(ans<10){
                    cout<<i<<"*"<<j<<"= "<<ans<<" ";
                }else{
                    cout<<i<<"*"<<j<<"="<<ans<<" ";
                }
            }else if(i == a && j == b){
                int ans = i * j;
                if(ans<10){
                    cout<<i<<"*"<<j<<"= "<<ans<<" ";
                }else{
                    cout<<i<<"*"<<j<<"="<<ans<<" ";
                }
            }else{
                cout<<"       ";
            }
        }
        cout<<endl;
    }
}