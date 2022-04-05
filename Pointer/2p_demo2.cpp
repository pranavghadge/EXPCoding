#include<iostream>
using namespace std;

int main(){
    int a =10;
    int *iptr = &a;
    cout << *iptr++ << "\n"; 
    // postfix op willtake place first and as it is post fix the operation will take place on 1000 ie the answer is 10 and iptr gets inc from 1000 to 1004
    cout << ++*iptr << "\n";
    // *iptr gets value stored at a ie 10 so ++a therefore the answer is 11 and iptr=1000
    cout << *++iptr << "\n";
    // b=20 and a stored at 1000 and b at 1004
    // ++iptr gets the address to 1004 and *1004 gets the answer as 20
    cout << (*iptr)++ << "\n";
    // brackets has higher precedence hence *iptr gives (a)++ so the printed answer is 10 and a is inc to value 11
}