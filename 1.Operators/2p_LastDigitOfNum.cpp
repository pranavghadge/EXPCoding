// take input from user and print last digit of that number
#include<iostream>
using namespace std;

int main(){
    int num,last;
    cin >> num;
    last = num % 10;
    cout << last; 
    return 0;
}