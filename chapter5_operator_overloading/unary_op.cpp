//WAP for unary operator


#include<iostream>

class unary{
    private: 
    int a, b, c;

    public:
    void getdata(int x, int y, int z){
        x=a;
        y=b;
        z=c;
    }
    void operator -(){
        a = -a;
        b=-b;
        c=-c;
    }
    void display(){
        std::cout<<"The value of a is "<<a;
        std::cout<<"The value of b is "<<b;
        std::cout<<"The value of c is "<<c;
    }
};

int main(){
    unary obj;
    obj.getdata(-10, 20, 30);
    obj.display();
    //calling overloaded operator
    - obj;
    obj.display();
}
