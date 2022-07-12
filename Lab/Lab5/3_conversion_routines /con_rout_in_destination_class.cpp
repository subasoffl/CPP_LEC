#include<iostream>
#include<cmath>
using namespace std;
class reactangle
{
  public :
  float x ,y;
  //constrcutor
  reactangle()
  {
    x = 0;
    y = 0;
  }
  
  reactangle(float a,float b)
  {
    x = a;
    y = b;
  }
//print matra garne yo class ma
  void showData()
  {
    cout<<"Coordinate is ("<<x<<" , "<<y<<")"<<endl;
  }
   
};
class Polar
{   
    protected:
    float r ,angle,radian;
    public:
    Polar()
    {
        r = 0;
        radian = 0;
        angle = 0;
    }
    void getData()
    {
        cout<<"Enter the coordinates in polar form "<<endl;
        cout<<"r :";
        cin>>r;
        cout<<"angle :";
        cin>>radian;
        angle = (radian * 3.14/180);
    }
    operator reactangle()
    {
        float a =static_cast<float>(r*cos(angle));
        float b =static_cast<float>(r*sin(angle));
        return reactangle(a,b);
    }

};

int main ()
{
    Polar p;
    reactangle r;
    p.getData();
    r = p ;
    r.showData();
}