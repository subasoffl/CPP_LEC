#include<iostream>
using namespace std;
class base
{
    public:    
    base()
    {
       cout<<"this is constrcutor in base class"<<endl;
    }
    void virtual display()
    {
        cout<<"Hello"<<endl;
    }
    virtual ~base()
    {
        cout<<"this is destructor in base class"<<endl;
    }
};
class derived:public base
{
    public:
    derived()
    {
        cout<<"this in constructor in derived class"<<endl;
    }
    ~derived()
    {
        cout<<"this is destrcutor in deirved class"<<endl;
    }

};
int main()
{
    base *b;
    b = new derived;
    b->display();
    delete b;

}
// virtual na rakda compile time ma base ko matra bho ....type heryo adress herena
// virtual banayesi adress k xa heryo kasto xa heryo ani derived koni destrcutor class bho