//WAP to print the largest number from the 3 numbers entered by user
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a>b && a>c){
        cout << a <<" is the largest number";
    }
    if(b>a && b>c){
        cout << b <<" is the largest number";
    }
    else{
        cout << c <<" is the largest number";
    }
    return 0;
}