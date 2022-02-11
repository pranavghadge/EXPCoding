#include<iostream>
using namespace std;

int main(){
    int i = 5;
    while(i>0){
        int j=1;
        while(j<=5){
            cout << i << " " << j << "\n";
            j++; 
        }
        i--;
    }
    return 0;
}