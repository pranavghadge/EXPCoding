/*
#include<iostream>
using namespace std;

void aos(int a){
    cout << a*a;
}

float aoc(float r){
    float area =  3.14 * r * r;;
    
}

int aor(int h,int l){
    return h*l;
}

int main(){
    int ch;
    cin >> ch;
    int a;
    float b;
    switch(ch){
        case 1:
            cin >> a;
            aos(a);
            break;
        case 2:
            float area = aoc(b);
            break;
        case 3:
            int h,l;
            cin >> h >> l;
            int area = aor(h,l);
            cout << area << "\n";
            break;
        default:
            cout << "Enter valid numbers from 1,2,3\n";
            break;
    }
    return 0;
}
*/

#include<iostream>
using namespace std;

double calAreaofCircle(){
    int radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    return 3.14 *radius*radius;
}

void calAreaofSquare(int side){
    cout << "Area of Square= " << side*side<<"\n"; 
}

int calAreaofRectangle(int lenght,int width){
    return lenght*width;
}

int main(){
    int ch;
    cout << "Please enter a valid operation number from the below menu:"
            "\n1. Calculate Area of circle \n2. Calculate Area of square"
            "\n3. Calculate Area of rectangle\n";
    cin >> ch;
    int side,length,width,rectArea;
    double circleArea;
    switch(ch){
        case 1: 
            circleArea = calAreaofCircle();
            cout << "Area of circle= "<< circleArea<<"\n";
            break;
        case 2:
            cout << "Enter the side of the square: ";
            cin >> side;
            calAreaofSquare(side);
            break;
        case 3:
            cout << "Enter the length and width of the rectangle: ";
            cin >> length >> width;
            rectArea = calAreaofRectangle(length,width);
            cout << "Area of Rectangle= "<<rectArea<< "\n";
            break;
        default:
            cout << "Invalid operation number entered\n";
    }
    return 0;
}