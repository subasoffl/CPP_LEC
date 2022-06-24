#include<iostream>

using namespace std;

class Unaryfriend{
    int a= 10, b= 20, c=30;

    public:
    void show(){
        cout<<a<<endl<<b<<endl<<c<<endl;
    }
    void friend operator -(Unaryfriend u1);
};

void operator -(Unaryfriend u1){
    u1.a = -u1.a;
    u1.b = -u1.b;
    u1.c = -u1.c;

    cout<<u1.a;

}

int main(){
    Unaryfriend f1, f2;
    cout<<"Before Overloading" <<endl;
    f1.show();
    cout<<"AFter Overloading" <<endl;
    -f1;
    f1.show();
    
    return 0;
}

