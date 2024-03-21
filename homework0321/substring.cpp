#include <iostream> 
#include <string>
using namespace std;

int main(){
    char arr[201];
    char arA[100];
    char arB[100];
    while (true)
    {
        cin >> arA;
        cin >> arB;
        //split arA and arB from space
        /*
        cin.getline(arr, 201);
        int i = 0;
        while (arr[i] != ' ')
        {
            arA[i] = arr[i];
            i++;
        }
        arA[i] = '\0';
        i++;
        int j = 0;
        while (arr[i] != '\0')
        {
            arB[j] = arr[i];
            i++;
            j++;
        }
        arB[j] = '\0';
        */
        //cout << "arA: " << arA << endl;
        //cout << "arB: " << arB << endl;

        if (arA[0] == '0' and arB[0] == '0')
        {
            break;
        }
        int i = 0;
        int j = 0;
        int k = 0;
        while (arB[j] != '\0')
        {
            if (arA[i] == arB[j])
            {
                i++;
                if (arA[i] == '\0')
                {
                    cout << "true" << endl;
                    k++;
                    break;
                }
            }
            j++;
        }
        if (k == 0)
        {
            cout << "false" << endl;
        }
    }
}