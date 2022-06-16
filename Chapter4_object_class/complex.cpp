#include<iostream>
using namespace std;
class complex
{
    private:
    float real,img;
    public:
    void input()
    {
        cout<<"Enter the real part:"<<endl;
        cin>>real;
        cout<<"Enter the imaginary part:"<<endl;
        cin>>img;
    }
    float realsum(complex s1, complex s2)
    {
        float realsum;
        realsum=s1.real+s2.real;
        return realsum;
    }
    float realimg(complex s1, complex s2)
    {
        float realimg;
        realimg=s1.img+s2.img;
        return realimg;
    }

};
int main()
{
    complex n1,n2,result;
    n1.input();
    n2.input();
    cout<<"The sum is :"<<result.realsum(n1,n2)<<" + i "<<result.realimg(n1,n2);

}