/*
You are provided with this table containing a character and its value. Given one of this character as input you need to print it's corresponding value.
| P or p 	- PrepBytes      	|
| Z or z 	- Zenith         	|
| E or e 	- Expert Coder   	|
| D or d 	- Data Structure 	|

Input format
A single character

Output format
For each test case print the corresponding value of the given character.

Time Limit
1
 ​secon

Example
Input
e

Output
Expert Coder
*/

#include<iostream>
using namespace std;

int main(){
    char c = 'X';
    cin >> c;
    switch (c){
        case 'p':
        case 'P':
            cout << "PrepBytes" << endl;
            break;

        case 'z':
        case 'Z':
            cout << "Zenith" << endl;
            break;

        case 'e':
        case 'E':
            cout << "Expert Coder"<< endl;
            break;
        
        case 'd':
        case 'D':
            cout << "Data Structure" << endl;
            break;

        default:
        cout << "Enter valid Character" << endl;
        }
    return 0;
}