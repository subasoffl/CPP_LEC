//public or private inheritance

#include<iostream>
using namespace std;

class A
{
    private:
    int pvtdataA;

    protected:
    int protdataA;

    public:
    int pubdataA;

};

class B : public A              //publicly derived
{
    public:
    void func()
    {
        int a;
        a=pvtdataA;           //error: not accessible
        a=protdataA;          //ok
        a=pubdataA;           //ok
 
    }
};
class C: protected A           //protectedly dervied
{
    public:
    void func()
    {
        int a;
        a=pvtdataA;
        a=protdataA;
        a=pubdataA;
    }
};
class D: private A;          //privately derived
{
    public:
    void func()
    {
        int a;
        a=pvtdataA;
        a=protdataA;
        a=pubdataA;

    }
};

int main()
{
    int num;
    B objB;
    num= objB.pvtdataA;            //not accessible
    num= objB.protdataA;                   //error  
    num= objB.pubdataA;                 //ok: pubdataA is public to B

    C objC;
    num= objC.pvtdataA;
    num= objC.protdataA;
    num= objC.pubdataA;

    D objD;
    num=objD.pvtdataA;
    num= objD.protdata;
    num = objD.pubdata;

    return 0;

}