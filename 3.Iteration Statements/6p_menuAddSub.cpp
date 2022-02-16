/*
1.WAP to display a menu of two Operations Addition and Subtraction
    Give an int number to each of two operations
2.Input valid operation number
3.Take 2 inputs and perform the operation
4.Ask user to perform the operations(Y/N)
    If users enters Y again display the menu and repeat the process 
    Else exit the code

O/P:
List of operadtions is:
1.Add
2.Subtract
Select a valid operation number:1
Enter two number to add: 5 6

Addition=11
Do you again want to perform the operations(Y/N): 
and repeat again or exit
*/
#include<iostream>
using namespace std;

int main(){
    int oper,num1=1,num2=1;
    char choice='N';
    do{
        cout << "List of operations is:\n 1.Add\n 2.Subtract\n";
        cout << "Select a valid operation number: ";
        cin >> oper;
        if (oper == 1){
            cout << "Enter two number to add: ";
            cin >> num1 >> num2;
            cout << "Addition = "<< num1 + num2 << "\n";
        }
        else if (oper == 2){
            cout << "Enter two number to subtract: ";
            cin >> num1 >> num2;
            cout << "Subtraction = "<< num1 - num2 << "\n";
        }
        cout << "Do you again want to perform the operations(Y/N): \n";
        cin >> choice;
    }while(choice == 'Y');
    return 0;
}