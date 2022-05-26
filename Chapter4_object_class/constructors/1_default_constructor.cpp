#include<iostream>

using namespace std;

class construct{
    public:

    int a, b;


    construct(){
    
        cout<<"Constructor is called";
        a=1;
        b=2;
    }

    void display(){
        cout<<"My name is subas kandel";
    }
};

int main(){

    construct c;

    c.display();

    cout<<"The value of a is\t"<<c.a<<endl;
    cout<<"The value of b is\t"<<c.b<<endl;

}