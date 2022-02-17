// take 2 inputs from user and print their sum
// 4 5
// 9
// 5 7
// 12
//first line take input number of test case 
// 4
// 2 3
// 5 and so on till we take 3 more pairs of user input

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t!=0){
        int a,b;
        cin >> a>> b;
        int result=a+b;
        cout << result;
        t=t-1;
    }
    return 0;
}