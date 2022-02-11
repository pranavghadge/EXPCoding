#include<iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    // for(int i=1;i<=num;i++){
    //     cout << i << " ";
    //     if (i % 5 == 0){
    //         cout << "\n";
    //     }
    // }

    int i=1;
    while(i<=num){
        // if(i%5==0)
        //     cout<< "\n";    doesnt give the expected output
        cout << i << " ";
        if(i%5==0)
            cout<< "\n";
        i+=1;
        
    }
    return 0;
}