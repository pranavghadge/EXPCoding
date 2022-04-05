#include<iostream>
using namespace std;

int main(){
     int x= 8;
     int *y = &x;
     cout << x << "\n";
     cout << &x << "\n";
     cout << y << "\n";
     cout << *y << "\n";
     cout << &y << "\n";
return 0;
}