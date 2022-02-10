// Codechef january long challenge 2020 breaking bricks BRKBKS
// ada has strenght of s and w1,w2,w3 are the width(1,2) of the bricks and she breaks all the bricks
// the possible combinations can be
/*
 1 1 1
 1 1 2
 1 2 1
 1 2 2
 2 1 1
 2 1 2
 2 2 1
 2 2 2
*/

#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int s,w1,w2,w3;
        cin >> s >> w1 >> w2 >> w3;
        if(w1+w2+w3 <= s)
            cout << 1 << endl;
        else{
            int sum1,sum2;
            sum1 = w1 + w2;
            sum2 = w2 + w3;
            if(sum1 <= s || sum2 <= s)
                cout << 2 << endl;
            else
                cout << 3 << endl;
        }
    }
    return 0;
}