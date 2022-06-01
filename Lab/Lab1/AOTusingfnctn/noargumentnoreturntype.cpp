#include<iostream>
#include<math.h>
using namespace  std;
void CalculateArea()
{
      float a, b, c, s, area;
    cout<<"Enter the length of side a: "<<endl;
    cin>>a;
    cout<<"Enter the length of side b: "<<endl;
    cin>>b;
    cout<<"Enter the length of side c: "<<endl;
    cin>>c;
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"The area of the triangle is: "<<area<<endl;
}


int main()
{
    CalculateArea();
}