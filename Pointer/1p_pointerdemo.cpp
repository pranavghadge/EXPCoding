#include<iostream>
using namespace std;

int main(){
    int a =100;
    int *iptr = &a;
    char c ='a';
    // int *cptr = &c;
    double d;
    double *dptr = &d;
    cout << iptr << "\n";
    // cout << cptr << "\n";
    cout << dptr << "\n";
}