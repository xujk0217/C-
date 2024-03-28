#include <iostream>
using namespace std;

int main(){
    while(1){
        char str[100];
        cin >> str;
        int scount = 0;
        int mcount = 0;
        int lcount = 0;

        int s = 0;
        int m = 0;
        int l = 0;

        if(str[0] == '0'&&str[1] == '\0'){
            break;
        }

        for(int i = 0; str[i] != '\0'; i++){
            if(str[i] == '('){
                scount++;
            }
            else if(str[i] == ')'){
                scount--;
                if(scount < 0){
                    s++;
                    scount = 0;
                }
            }
            else if(str[i] == '['){
                mcount++;
            }
            else if(str[i] == ']'){
                mcount--;
                if(mcount < 0){
                    m++;
                    mcount = 0;
                }
            }
            else if(str[i] == '{'){
                lcount++;
            }
            else if(str[i] == '}'){
                lcount--;
                if(lcount < 0){
                    l++;
                    lcount = 0;
                }
            }
        }
        s += scount;
        m += mcount;
        l += lcount;
        cout << "小括號：" << s << ", 中括號：" << m << ", 大括號：" << l << endl;
    }
}