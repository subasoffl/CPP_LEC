// write a program to calculate area of triangle.

#include <iostream>

using namespace std;

int main(){
    
    int height, base, area;

    cout<< "Enter the value of height ";
    cin>>height;

    cout<<"Enter the value of base ";
    cin>>base;

    area = 0.5*base*height;
    cout<<"The area of the given triangle is "<<area;
    return 0;
}
