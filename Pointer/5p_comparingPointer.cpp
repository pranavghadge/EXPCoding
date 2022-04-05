// comparison of 2 pointer
// comparison can only be done if pointers are pointing to same type

#include<iostream>
using namespace std;

int main(){
     int a=10;
     int *aptr = &a;
     int b=12;
     int *bptr = &b;
     if(aptr <= bptr)
        cout << "hi";
return 0;
}       