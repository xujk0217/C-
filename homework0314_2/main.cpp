#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
#include "Time.h"

int main()
{
    Time t;
    cout << "Initial time: ";
    t.showTime();
    cout << endl;

    bool isSetSuccess;

    while (true)
    {
        cout << "Please set time: ";
        string s;
        getline(cin, s);

        // 操作字串的物件
        stringstream ss(s);
        // 存放分割後的字串
        vector<int> v;
        // 暫存整數
        int temp;

        // 將字串依照空白字元分割
        while (ss >> temp)
        {
            v.push_back(temp);
        }

        if (v.size() == 1)
        {   
            if(v[0] == -1){
                break;
            }
            isSetSuccess = t.setTime(v[0]);
        }
        else if (v.size() == 3)
        {
            isSetSuccess = t.setTime(v[0], v[1], v[2]);
        }
        else
        {
            cout << "Error!!!" << endl;
        }
        cout << "Set time: ";
        if (isSetSuccess)
        {
            t.showTime();
        }
        else
        {
            cout << "Error!!!"<<endl;
        }
        cout << endl;
    }
    return 0;
}
