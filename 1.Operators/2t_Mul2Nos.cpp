/*
Multiply Numbers
Let's practice multiplication a bit.
Write a program to take two integers x and y as input from the user, multiply those integers and print the product.

Input format
Two space-separated integers are provided x and y.

Output format
Print a single integer representing the product of x and y as output.

Constraints−10<=a,b<=40

Time Limit
1 ​second

Example
Input
5 5

Output
25

Sample Test Case Explanation
5∗5=25
*/

#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int a,b,mul;
    cin >> a >> b;
    mul = a * b;
    cout << mul;
    
    return 0;
  }
