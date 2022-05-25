#include<iostream>
using namespace std;
// returntype is double but not int to have output in point
double sum(int a, double b)
{
    return a+b;
}
int sum(int a,int b)
{
    return a+b;
}
int main ()
{
    cout<<sum(3,3.5)<<endl;
    cout<<sum(3,4)<<endl;
}  
