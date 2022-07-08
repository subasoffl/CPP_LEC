#include<iostream>
using namespace std;
class add
{
    private:
    int x,y,z;
    public:
    add()
    {
        x=0;
        y=0;
        z=0;
    }
    void getdata()
    {
     cout<<"Enter the x component:"<<endl; 
     cin>>x;
     cout<<"Enter the y component:"<<endl; 
     cin>>y;
     cout<<"Enter the z component:"<<endl; 
     cin>>z;
    }
    void showdata()
    {
        cout<<x<<"i + "<<y<<"j + "<<z<<"k "<<endl;
    }
    add operator +(add a)
    {
        // object return 
        add sum;
        sum.x=x+a.x;
        sum.y=y+a.y;
        sum.z=z+a.z;
        return sum;
    }
};
int main()
{
add a,b,c;
a.getdata();
b.getdata();
c = a + b;
cout<<" The Sum is ";
c.showdata();
}