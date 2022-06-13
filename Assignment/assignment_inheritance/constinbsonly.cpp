//constructor in base class only
#include<iostream>
using namespace std;

class base{
    public:
    base(){
        cout<<"Default constructor from base class";

    }
};
class derived: public base{
    public:
    derived(){
        //body of derived class
    }
};
int main(){
    derived d;
}