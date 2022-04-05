// Increment operator in pointer

#include<iostream>
using namespace std;

int main(){
     int a=10;
     int *iptr = &a;
     char c = 'a';
     char *cptr = &c;
     cout << iptr <<"\n";
     cout << cptr <<"\n"; 
     iptr++;
     cptr++;
     cout << iptr <<"\n";
     cout << cptr <<"\n";
     iptr + 2;
     cout << iptr <<"\n";
return 0;
}