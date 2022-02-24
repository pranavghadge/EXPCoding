/*
One Pattern
Print in the output the exact pattern provided below
1
1 1
1 1 1
1 1 1 1
1 1 1 1 1

Input format
A single integer N

Output format
Print the same pattern provided in the problem statement.

Constraints
N=1

Input
1

Output
1
1 1
1 1 1
1 1 1 1
1 1 1 1 1
*/

#include<iostream>
using namespace std;

int main(){
    int n=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout << n << " ";
        }
        cout << "\n";
    }
    return 0;
}