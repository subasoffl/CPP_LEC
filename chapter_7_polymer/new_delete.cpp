#include<iostream>
using namespace std;
int main()
{
    // declare int and float pointer
    int *pointint;
    float *pointfloat;
    // dynamically  allocated memory

    pointint = new int;
    pointfloat = new float;
    cout<<"ADRESS  assigned to poinint is:"<<pointint<<endl;
    cout<<"ADDRESS assigned to pointfloat is:"<<pointfloat<<endl;

    *pointint =45;
    *pointfloat = 45.5;
    cout<<"Value of pointint is :"<<*pointint<<endl;
    cout<<"value of pointfloat is :"<<*pointfloat<<endl;
    delete pointint;
    delete pointfloat;



    
}