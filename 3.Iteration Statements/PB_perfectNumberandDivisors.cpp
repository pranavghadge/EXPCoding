#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum =0;
        for(int i=1;i<n;i++){
            if(n%i==0){
            sum = sum + i;
        }
        if(sum==n)
            cout << "true"<<"\n";
        else
            cout << "false"<<"\n";
        }
        
    }
    return 0;
}