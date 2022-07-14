#include<iostream>
using namespace std;
class animal
{
    public:
    virtual void move()=0; //pure virtual function
};
class dog:public animal
{
    public:
    void move()
    {
        cout<<"dog runs";
    }
};
int main()
{
   animal *an;
   dog obj;
   an=&obj;
   an->move();
}