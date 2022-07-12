#include<iostream>
#include<cmath>
using namespace std;
class Polar
{   
    protected:
    float r ,angle;
    public:
    Polar()
    {
        r = 0;
        angle = 0;
    }
    void getData()
    {
        cout<<"Enter the coordinates in polar form "<<endl;
        cout<<"r :";
        cin>>r;
        cout<<"angle :";
        cin>>angle;
    }
    float return_radius()
    {
        return r;
    }
    float return_angle()
    {
        return (angle* 3.14/180);
    }

};
class Rectangle
{
  public :
  float x ,y;
  Rectangle()
  {
    x = 0;
    y = 0;
  }
  void showData()
  {
    cout<<"Coordinate is ("<<x<<" , "<<y<<")"<<endl;
  }
   Rectangle(Polar p)
    { 
      
      x = p.return_radius() * cos(p.return_angle());
      y = p.return_radius() * sin(p.return_angle());

    }
};
int main ()
{
    Polar p;
    Rectangle r;
    p.getData();
    r = p ;
    r.showData();
}