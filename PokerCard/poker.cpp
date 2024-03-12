#include <iostream>
#include "Card.h"
using namespace std;

int main()
{
    int f, num;
    cout << "輸入你想選擇的花色對應的數字（1：黑桃, 2:愛心, 3:菱形, 4:梅花）：";
    cin >> f;

    int count = 0;

    while (f != 1 && f != 2 && f != 3 && f != 4)
    {
        count += 1;
        if (count > 3)
        {
            cout << "喂！！！重新輸入啦！！！看不懂嗎 =>（1：黑桃, 2:愛心, 3:菱形, 4:梅花）！！！：";
            cin >> f;
        }
        else
        {
            cout << "錯誤！！！請重新輸入你想選擇的花色對應的數字（1：黑桃, 2:愛心, 3:菱形, 4:梅花）！！！：";
            cin >> f;
        }
    }
    cout << "輸入你一行想要的數量：";

    cin >> num;
    // ramdom
    bool isRam = false;
    char YorN;
    int ram[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
/*
    cout << "要隨機嗎？（Y/N）：";
    cin >> YorN;

    if (YorN == 'Y')
    {
        isRam = true;
    }
    else if (YorN == 'N')
    {
        isRam = false;
    }
    else
    {
        cout << "what? 我先按照順序輸出好了" << endl;
        isRam = false;
    }
*/
    Card a(f);

    if (isRam == false)
    {
        int i;
        for (i = 1; i < 14; i += num)
        {
            if (num + i > 13)
            {
                num = 14 - i;
            }
            //card height
            for (int j = 0; j < 11; j++)
            {
                switch (j)
                {
                case 0:
                    for (int k = 0; k < num; k++)
                    {
                        a.printNumT(i + k);
                        cout << "   ";
                    }
                    cout << endl;
                    break;
                case 1:
                    for (int k = 0; k < num; k++)
                    {
                        a.printNumS(i + k);
                        cout << "   ";
                    }
                    cout << endl;
                    break;
                case 2:
                    for (int k = 0; k < num; k++)
                    {
                        a.printNumO(i + k);
                        cout << "   ";
                    }
                    cout << endl;
                    break;
                case 3:
                    for (int k = 0; k < num; k++)
                    {
                        a.printFloO();
                        cout << "   ";
                    }
                    cout << endl;
                    break;
                case 4:
                    for (int k = 0; k < num; k++)
                    {
                        a.printFloS();
                        cout << "   ";
                    }
                    cout << endl;
                    break;
                case 5:
                    for (int k = 0; k < num; k++)
                    {
                        a.printFloT();
                        cout << "   ";
                    }
                    cout << endl;
                    break;
                case 6:
                    for (int k = 0; k < num; k++)
                    {
                        a.printFloF();
                        cout << "   ";
                    }
                    cout << endl;
                    break;
                case 7:
                    for (int k = 0; k < num; k++)
                    {
                        a.printFloFi();
                        cout << "   ";
                    }
                    cout << endl;
                    break;
                case 8:
                    for (int k = 0; k < num; k++)
                    {
                        a.printNumO(i + k);
                        cout << "   ";
                    }
                    cout << endl;
                    break;
                case 9:
                    for (int k = 0; k < num; k++)
                    {
                        a.printNumS(i + k);
                        cout << "   ";
                    }
                    cout << endl;
                    break;
                case 10:
                    for (int k = 0; k < num; k++)
                    {
                        a.printNumT(i + k);
                        cout << "   ";
                    }
                    cout << endl;
                    break;
                default:
                    break;
                }
            }
            cout << endl;
            cout << endl;
            if (num + i > 13)
            {
                break;
            }
        }
    }else{

    }
    return 0;
}