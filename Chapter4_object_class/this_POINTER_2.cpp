#include <iostream>
using namespace std;
class Test 
{
    private:
    int x;
    public:
    void setX(int x)
    {
        this->x=x;
    }
    void print()
    {
        cout<<"Value of x is:"<<x<<endl;
        cout<<"The address of the object is calling x is"<<this<<endl;
    }
};
int main ()
{
    Test obj,obj2;
    obj.setX(20);
    obj.print();
    obj2.setX(100);
    obj.print();
    return 0;
}
