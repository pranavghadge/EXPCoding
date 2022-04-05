#include<iostream>
using namespace std;

void fun(int *a,int *b){
    a = b;
    *a = 2;
}

int main(){
    int x=0,y=1;
    fun(&x,&y);
    cout<< x <<" "<< y <<"\n";     
return 0;
}