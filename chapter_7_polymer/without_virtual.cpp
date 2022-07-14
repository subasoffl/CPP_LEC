#include<iostream>
using namespace std;
class shape
{
    protected:
    int width,height ;
    public:
    shape(int a=0,int b=0)
    {
        width=a;
        height=b;
    }
    void  showdata()
    {
        cout<<"THe area is :"<<endl;
    }
};
class Rectangle : public shape
{
    protected :
    int width,height;
    public:
   Rectangle(int a,int b)
    {
        width=a;
        height=b;
    }
    void  showdata()
    {
        cout<<"THe area is :"<<width*height<<endl;
    }
};
class triangle : public shape
{
    protected :
    int width,height;
    public:
   triangle(int a,int b)
    {
        width=a;
        height=b;
    }
    void  showdata()
    {
        cout<<"THe area is :"<<width*height/2<<endl;
    }
};
int main()
{
    shape *s;
    Rectangle obj1(1,2);
    triangle obj2(2,3);
    s=&obj1;
    s->showdata();
    s=&obj2;
    s->showdata();
}
// when a function is made virtual it allows the program to decide at run time which functon
//  to call BASED ON THE TYPE OF THE OBJECT POINTED BYT THE POINTER rather than TYPE OF THE POINTER ITSELF.git