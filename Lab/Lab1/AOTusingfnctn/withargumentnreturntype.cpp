// 2.	Write a program in C++ to compute area of triangle using following user defined function type.
//	with arguments with return type
#include<iostream>
#include<math.h>


using namespace std;

float Calculatedarea(float a, float b, float c);
int main(){
    float area, s, a, b, c;

    cout<<"Enter Value of Side a: ";
    cin>>a;
    cout<<" Enter Value of Side b: ";
    cin>>b;
    cout<<" Enter Value of Side c: ";
    cin>>c;
    area = Calculatedarea(a, b, c);
    cout<<"The area of triangle is: "<<area;
    return 0;
}


float Calculatedarea(float a, float b, float c){
    float s, area;
    s=(a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}