#include<iostream>
using namespace std;
class ComplexSum
{
    private:
    float real,imaginary;
    public:
    void input()
    {
        cout<<"Enter value of real part:";
        cin>>real;
        cout<<"Enter value of imaginary part:";
        cin>>imaginary;
    }
    double realsum(ComplexSum n1, ComplexSum n2)
    {
    double realsum;
    realsum=n1.real+n2.real;
    return realsum;
    }
    double imgsum(ComplexSum n1,ComplexSum n2)
    {
    double imgsum;
    imgsum=n1.imaginary+n2.imaginary;
    return imgsum;
    }
};
int main()
{
    ComplexSum a,b,result;
    a.input();
    b.input();
    cout<<"The sum is "<<result.realsum(a,b)<<"+"<<result.imgsum(a,b)<<"i"<<endl;
}