/*
Clock and Angles
Buddy has an analog clock which consists of two hands one for hour and another for minute. She wants to calculate the shorter angle formed between hour and minute hand at any given time.

Input format
The first line contains the number of test cases T. 
Each test case contains two integers h and m representing the time in hour and minute format.

Output format
For each test case on a new line, print the required shorter angle.

Constraints
1<=T<=5

All valid times

Time Limit
1 second

Example
Input
2
5 30
6 00

Output
15
180
*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      int h,m;
      cin >> h >> m;
      int hour = (h%12 + (float)m/60)*30;     // 360/12
      int minute = m * 6;              // 360/60
      int angle = abs(hour-minute);
      if(angle>180)
        angle = 360-angle;
      cout << angle << "\n";
    }
    return 0;
}