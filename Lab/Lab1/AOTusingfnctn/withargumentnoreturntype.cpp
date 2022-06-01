// 2.	Write a program in C++ to compute area of triangle using following user defined function type.
//	with arguments no return type

#include<iostream> 
#include<math.h>


using namespace std;
void calculatedarea(float a, float b, float c);
int main(){
    float area, s, a, b, c;

    cout<<"Enter Value of Side a: ";
    cin>>a;
    cout<<" Enter Value of Side b: ";
    cin>>b;
    cout<<" Enter Value of Side c: ";
    cin>>c;

    calculatedarea(a, b, c);

}



void calculatedarea(float a, float b, float c){
    float s, area;
    s = (a+b+c);
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"The area of a triangle is " <<area;

}