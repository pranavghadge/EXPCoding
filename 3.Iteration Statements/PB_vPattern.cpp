#include<iostream>
using namespace std;

int main(){
    char ch;
    cin >> ch;
    int space = 8;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++)
            cout << j;

        for(int k=1;k<=space;k++)
            cout << " ";
        space = space - 2;

        for(int j=i;j>=1;j--){
            cout << j;
        }
        cout << "\n";
    }

    return 0;
}