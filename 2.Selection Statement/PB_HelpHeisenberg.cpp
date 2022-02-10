#include<iostream>
using namespace std;

int main(){
    long long n,sum;
    cin >> n;
    sum = (n * (n+1))/2;
    // cout << sum;
    if(sum%2 == 0)
        cout << 0 << "\n";
    else 
        cout << 1 << "\n";  
    return 0;
}