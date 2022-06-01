#include<iostream> 
#include<math.h>

using namespace std;
float calculatedarea();

int main(){
    float area;
    area=calculatedarea();
    cout<<"The area of triangle is :"<<area<<endl;
}

float calculatedarea(){
    float area, s, a, b, c;

    cout<<"Enter Value of Side a: ";
    cin>>a;
    cout<<" Enter Value of Side b: ";
    cin>>b;
    cout<<" Enter Value of Side c: ";
    cin>>c;


    s = (a+b+c);
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}