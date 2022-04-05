#include<iostream>
using namespace std;

int main(){
     int ***r, **q, *p, i=8;
     p = &i;
     q = &p;
     r = &q;
     cout << *p << " " << **q << " " << ***r << "\n";
return 0;
}