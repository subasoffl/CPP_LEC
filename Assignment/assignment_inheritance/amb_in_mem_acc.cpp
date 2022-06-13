//ambiguity in member access

#include<iostream>
using namespace std;
class BaseOne{
    public:
    void display(){
        cout<<"I am from Baseone"<<endl;
    } 
};
class BaseTwo{
    public:
    void display(){
        cout<<"I am from Basetwo"<<endl;
    }
};
class Derived : public BaseOne, public BaseTwo{
    public:
    void drvdisplay(){
        //display(); //error: ambigous, whic display to call
        BaseOne::display(); //Ok: base class name specified
        BaseTwo::display(); //ok: base class name specified
    }
};
 int main(){
    Derived Der;
    // Der.display(); //error: ambiginous, which display to call
    Der.BaseOne::display(); // display() of base 1 class is called
    Der.BaseTwo::display(); // display() of base 2 class is called
 }