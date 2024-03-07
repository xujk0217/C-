#include <iostream>
#include <string>
#include "Skin.h"

using namespace std;

int main()
{
    //Skin a, b, c, d, e, f, g, h, i, j;
    Skin char1[3];
    Skin char2[3];
    Skin char3[3];
        char1[0].setFunction("a", 1, "turtle set", 200);
        char1[1].setFunction("b", 1, "rabbit set", 500);
        char1[2].setFunction("c", 1, "fish set", 800);

        char2[0].setFunction("d", 2, "bird set", 200);
        char2[1].setFunction("e", 2, "orange set", 400);
        char2[2].setFunction("f", 2, "apple set", 900);

        char3[0].setFunction("g", 3, "watermelon set", 200);
        char3[1].setFunction("h", 3, "penguin set", 600);
        char3[2].setFunction("i", 3, "polar bear set", 1000);
        
    int money;
    int shopOrNot = 1;
    int ChooseCharNum;
    string ChooseSkin;
    int isCorrChoose = 0;

    cout << "Enter your money: ";
    cin >> money;
    if (money < 1)
    {
        cout << "What ?? Enter your money again: ";
        cin >> money;
        if (money < 1)
        {
            cout << "No money? bye bye!!";
            return 0;
        }
    }

    while(shopOrNot!=2)
    {
        cout << "Enter 1 to shop, 2 to leave !" << endl;
        cin>>shopOrNot;
        if (shopOrNot < 1||shopOrNot > 2)
        {
            while (shopOrNot < 1||shopOrNot > 2)
            {
                cout << "Again !! Enter 1 to shop, 2 to leave !";
                cin >> shopOrNot;
            }
        }
        if(shopOrNot ==1){
            cout<<"--------------------"<<endl;
            cout<<"Now you can buy:"<<endl;
            cout<<"character 1:"<<endl;
            for(int i = 0; i < 3; i ++){
                char1[i].printFunction();
            }
            cout<<endl;
            cout<<"character 2:"<<endl;
            for(int i = 0; i < 3; i ++){
                char2[i].printFunction();
            }
            cout<<endl;
            cout<<"character 3:"<<endl;
            for(int i = 0; i < 3; i ++){
                char3[i].printFunction();
            }
            cout<<endl;
            cout<<"--------------------"<<endl;
            cout << "Enter the character you want to choose(1, 2, 3): ";
            cin >> ChooseCharNum;
            if(ChooseCharNum ==1){
                cout << "Enter the skin you want to choose(a, b, c): ";
                cin>>ChooseSkin;
                isCorrChoose = 0;
                for(int i = 0; i < 3; i++){
                    if(char1[i].code == ChooseSkin){
                        money = char1[i].getFunction(money);
                        isCorrChoose = 1;
                    }
                }
                if(isCorrChoose == 0){
                    cout<<"no this skin!!";
                    cout<<endl;
                }
            }else if(ChooseCharNum ==2){
                cout << "Enter the skin you want to choose(d, e, f): ";
                cin>>ChooseSkin;
                isCorrChoose = 0;
                for(int i = 0; i < 3; i++){
                    if(char2[i].code == ChooseSkin){
                        money = char2[i].getFunction(money);
                        isCorrChoose = 1;
                    }
                }
                if(isCorrChoose == 0){
                    cout<<"no this skin!!";
                    cout<<endl;
                }
            }else if(ChooseCharNum ==3){
                cout << "Enter the skin you want to choose(g, h, i): ";
                cin>>ChooseSkin;
                isCorrChoose = 0;
                for(int i = 0; i < 3; i++){
                    if(char3[i].code == ChooseSkin){
                        money = char3[i].getFunction(money);
                        isCorrChoose = 1;
                    }
                }
                if(isCorrChoose == 0){
                    cout<<"no this skin!!";
                    cout<<endl;
                }
            }else{
                cout<<"no this character!!";
                cout<<endl;
            }
            cout<<"your money: "<<money;
            cout<<endl;
            
        }else{
            break;
        }
    }

    return 0;
}