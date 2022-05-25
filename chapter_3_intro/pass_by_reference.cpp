
   
#include<iostream>
using namespace std;
void normal(int a)
{
     a=10;
    cout<<"Inside normal function "<<a<<endl;
}
void refer (int &b)
{
     b=15;
    cout<<"Inside refer function"<<b<<endl;
}
int main(){
    int a=20;
    int b=25;
    normal (a);
    refer (b);
    cout<<"Inside main function "<<a<<endl;
    cout<<"Inside main function"<<b<<endl;

}