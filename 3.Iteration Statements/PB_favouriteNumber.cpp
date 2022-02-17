#include<iostream>
using namespace std;

int main(){
    int t,num;
    cin >> t;
    while(t--){
        cin >> num;
        int rem=0, count=0;
        while(num!=0){
            rem = num % 10;
            if(rem == 5)
                count++;
            num = num/10;
        }
        cout << count << "\n";
    }
    return 0;
}