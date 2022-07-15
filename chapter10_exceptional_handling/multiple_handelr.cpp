#include<iostream>
#define MAX 2
using namespace std;

class stack{
    protected:
        int s[MAX];
        int top;
    public:
        class FULL // exception class for full stack
        {};
        class EMPTY // for empty stack
        {};

    stack(){top=-1;} 

    void push(int x){
        if(top==MAX-1) // if stack full
            throw FULL();
        else
            s[++top]=x;
    }

    int pop(){
        if(top==-1)
            throw EMPTY();
        else
            return s[top--];
    }

};
int main(){
    stack s;
    try{
        s.push(11);
        s.push(22);
        s.push(33); // condition throwing exceptional FULL
        cout<<"\nNumber Popped"<<s.pop();
        cout<<"\nNumber Popped"<<s.pop();
        cout<<"\nNumber Popped"<<s.pop(); //condition if throwing exception EMPTY
    }
    catch(stack::FULL){
        cout<<"\nException: stack is Full"<<endl;
    }
    catch(stack::EMPTY){
        cout<<"\nException: stack is Empty"<<endl;
    }
    return 0;
}
