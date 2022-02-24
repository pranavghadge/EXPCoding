/*
PrepBuddy gave you a number X and asks you to find the sum of the digits present in the number.

Input format
One integer is provided denoting the value of X.

Output format
Print the sum of digits of X.

Constraints
1<=X<=10^6

Time Limit
1 second

Example
Input
102345

Output
15

Sample test case explanation
Sum of digit =1+0+2+3+4+5=15
*/

#include<iostream>
using namespace std;

int main(){
    int num,sum=0;
    cin >> num;
    while(num!=0){
        sum = sum + (num % 10);
        num = num /10;  
    }
    cout << sum ;
    return 0;
}