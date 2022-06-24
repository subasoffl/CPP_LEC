// after overloading the operator, it can be applied to an object
// in the same way as it is applied to the basic types


#include<iostream>
using namespace std;

class Count{
    private:
    int value;

    public:

    Count(){
        value = 7;
    }

    void operator ++(){
        ++value;
    }

    void operator ++(int){
        value++;
    }

    void display(){
        cout<<value<<endl;
    }
};

int main(){
    Count count1;

    count1;
    count1.display();

    count1++;
    count1.display();

    return 0;
}