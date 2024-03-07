#include <iostream>
using namespace std;

int main(){
    char arr[100];

    cin.getline(arr, 100);
    int i = 0;
    while(i < 100||arr[i] != '\0'){
        cout<<arr[i]<<endl;
        i++;
    }
}