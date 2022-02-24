/*
Reverse the number
PrepBuddy gave you a number X and asks you to reverse that number and print it.

Input format
One integer is provided denoting the value of X.
Note - The given number doesn't have leading or ending zero's.

Output format
Print the reverse of X.

Constraints
1<=X<=10^6

Time Limit
1 second

Example
Input
102345

Output
543201

Note - Do not use any inbuilt function for solving this question.
*/

#include<iostream>
using namespace std;

int main(){
    int num,rem;
    cin >> num;
    while(num!=0){
        rem = num % 10;
        num = num / 10;
        cout << rem;
    }
    return 0;
}