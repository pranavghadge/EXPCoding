/*
1
1 2
1 2 3
1 2 3 4 
1 2 3 4 5
*/

#include<iostream>
using namespace std;

int main(){
    int i=1;
    while(i<=5){
        int j=1;
        while(j<=i){
            cout << j << " ";
            j++;
        }
        cout << "\n";
        i++;

    }    
        
        
    
    return 0;
}