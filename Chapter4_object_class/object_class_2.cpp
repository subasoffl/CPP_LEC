#include<iostream>
using namespace std;
class room
{
    private:
    int length;
    int breadth;
    int height;
    public:
    void setValues(int len, int brt,int hgt)
    {
        length=len;
        breadth=brt;
        height=hgt;
    }
    int calculate_area()
    {
       
        return length*breadth;
    }
    int calculate_volume()
    {
    
        return  length*breadth*height;
    }
};
int main()
{

    room room1; 
    room1.setValues(5,5,5);

    // room1.lenght=5; room1.breadth=5;room1.height=5;)
    cout<<"The area of room is\t"<<room1.calculate_area()<<" sq.unit"<<endl;
    cout<<"The volume of room is\t"<<room1.calculate_volume()<<" cubic.unit"<<endl;