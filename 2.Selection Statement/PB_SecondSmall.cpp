/*
Second Smallest
You are given 3 distinct integer numbers X,Y and Z. Task is to print the second smallest number among the three provided numbers.

Input format
Input contains 3 distinct integers X,Y and Z.

Output format
Print the second smallest integer.

Time Limit
1 ​second

Constraints
1<=X,Y,Z<=100

Example
Input
10 42 15

Output
15
*/

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
    else{
        cout << c;
    }
    return 0;
}