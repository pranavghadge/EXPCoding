/* 
Print pattern 
         1
       1 2
     1 2 3
   1 2 3 4
 1 2 3 4 5
*/
#include<iostream>
using namespace std;

int main(){
    int spaces=4;
    for(int i=1; i<=5; i++){
        for(int k=1; k<=spaces; k++){
            cout << " " << " ";
        }
        for(int j=1; j<=i; j++){
            cout << j  << " ";
        }
        spaces--;
        cout << "\n";
    }
    return 0;
}