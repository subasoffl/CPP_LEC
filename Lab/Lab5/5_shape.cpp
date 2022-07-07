#include<iostream>
using namespace std;
class shape
{
    protected:
    float length,breadth;
    public:
    void get_data()
    {
        cout<<"Enter length:"<<endl;
        cin>>length;
        cout<<"Enter breadth:"<<endl;
        cin>>breadth;
    }
    virtual void display_area()=0; //virtual function in shape class
};
class triangle:public shape
{
    public:
    void get_data()
    {
        cout<<"For triangle"<<endl;
        shape::get_data();

    }
    void display_area()
    {
        cout<<"Area of triangle is:"<<0.5*length*breadth<<endl;

    }
};
class rectangle:public shape
{
      public:
    void get_data()
    {
        cout<<"For Reactangle"<<endl;
        shape::get_data();


    }
     void display_area()
    {
        cout<<"Area of reactangle is:"<<length*breadth<<endl;

    }

};
int main()
{
    triangle t;
    rectangle r;
    t.get_data();
    r.get_data();
    t.display_area();
    r.display_area();
}