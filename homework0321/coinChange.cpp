#include <iostream>
using namespace std;

int main(){
    int n;
    int fifty, ten, five, one;
    int type;
    while (true){
        cin >> n;
        if(n == 0){
            break;
        }
        type = 0;
        fifty = n / 50;
        for(int i = 0; i <= fifty; i++){
            ten = (n - 50 * i) / 10;
            for(int j = 0; j <= ten; j++){
                five = (n - 50 * i - 10 * j) / 5;
                for(int k = 0; k <= five; k++){
                    one = n - 50 * i - 10 * j - 5 * k;
                    type++;
                }
            }  
        }
        cout << "output: "<< type << endl; 
    }
}