#include<iostream>
using namespace std;

int main(){
    int c,t,count=0;
    int tc;
    cin >> tc;
    while(tc--){
        cin >> t >> c;
        if((c-t) >=2)
            count++; 
    }
    cout << count;
    return 0;
}