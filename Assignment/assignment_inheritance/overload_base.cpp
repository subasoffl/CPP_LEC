//overload_base.cpp
//Overidding the function when function are in base

#include<iostream>
using namespace std;

class base
{
    public:
    void display(char c)
    {
        cout<<"display() in base with char arguments"<<endl;
    }
    void display(int i)
    {
         cout<<"display() in base with int argument"<<endl;
    }
    
};

class derived:public base
{
    public:
    void display()
    {
        cout<<"display() in derived without argument"<<endl;
    }
};

int main()
{
    derived d1;
    d1.display();    //calls derived class display without argument
    d1.display('a');     //error:function with be hidden after overriding
    d1.display(5);      //error: function will be hidden after overriding 
    d1.base::display('a');   //calls base class display() with char argument
    d1.base::display(5);    //calls base class display with int argument

    return 0;
}

