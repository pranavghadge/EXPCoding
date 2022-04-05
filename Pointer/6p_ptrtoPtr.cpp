// storing address of one pointer into another pointer

#include<iostream>
using namespace std;

int main(){
     int a = 10;
     int *iptr = &a;
     int **iiptr = &iptr;
     cout << iiptr << "\n";
     cout << *iiptr << "\n";
     cout << **iiptr << "\n";
     cout << iptr << "\n";
     cout << *iptr << "\n";
return 0;
}