//WAP to print the second largest number from the 3 numbers entered by user
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a  >>b >>c;
    if(a>b && a<c || a>c && a<b){
        cout << a;
    }
    else if (b>a && b<c || b>c && b<a){
        cout << b;
    }
    // else if (c>a && c<b){
    //     cout << c;
    // }
    else{
        cout << c;
    }
    return 0;
}