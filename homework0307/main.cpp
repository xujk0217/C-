#include <iostream>
#include <string>
#include "Skin.h"

using namespace std;

int main()
{
    Skin a, b, c, d, e, f, g, h, i, j;
        a.setFunction("a", 1, "turtle set", 200);
        b.setFunction("b", 1, "rabbit set", 500);
        c.setFunction("c", 1, "fish set", 800);

        d.setFunction("d", 2, "bird set", 200);
        e.setFunction("e", 2, "orange set", 400);
        f.setFunction("f", 2, "apple set", 900);

        g.setFunction("g", 3, "watermelon set", 200);
        h.setFunction("h", 3, "penguin set", 200);
        i.setFunction("i", 3, "polar bear set", 200);
    int money;
    int shopOrNot = 1;
    int ChooseCharNum;
    string ChooseSkin;

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
            a.printFunction();
            b.printFunction();
            c.printFunction();
            cout<<endl;
            cout<<"character 2:"<<endl;
            d.printFunction();
            e.printFunction();
            f.printFunction();
            cout<<endl;
            cout<<"character 3:"<<endl;
            g.printFunction();
            h.printFunction();
            i.printFunction();
            cout<<endl;
            cout<<"--------------------"<<endl;
            cout << "Enter the character you want to choose(1, 2, 3): ";
            cin >> ChooseCharNum;
            if(ChooseCharNum ==1){
                cout << "Enter the character you want to choose(a, b, c): ";
                cin>>ChooseSkin;
                if(ChooseSkin == "a"){
                    money = a.getFunction(money);
                }else if(ChooseSkin == "b"){
                    money = b.getFunction(money);
                }else if(ChooseSkin == "c"){
                    money = c.getFunction(money);
                }else{
                    cout<<"no this skin!!";
                }
            }else if(ChooseCharNum ==2){
                cout << "Enter the character you want to choose(d, e, f): ";
                cin>>ChooseSkin;
                if(ChooseSkin == "d"){
                    money = d.getFunction(money);
                }else if(ChooseSkin == "e"){
                    money = e.getFunction(money);
                }else if(ChooseSkin == "f"){
                    money = f.getFunction(money);
                }else{
                    cout<<"no this skin!!";
                }
            }else if(ChooseCharNum ==3){
                cout << "Enter the character you want to choose(g, h, i): ";
                cin>>ChooseSkin;
                if(ChooseSkin == "g"){
                    money = g.getFunction(money);
                }else if(ChooseSkin == "h"){
                    money = h.getFunction(money);
                }else if(ChooseSkin == "i"){
                    money = i.getFunction(money);
                }else{
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