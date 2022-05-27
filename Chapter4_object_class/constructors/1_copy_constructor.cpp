#include<iostream>
using namespace std;
// Declaring class
class wall
{
    private:
    double length;
    double height;

    public:
    // parametrxied constructer
    wall(double len ,double hei)
    {
        length=len;
        height=hei;
    }
    // copy constructer with a wall object as parameter
    // syntax to create copy constrcuter - classname(classname &ibjection)
    wall(wall &obj)
    {
        // intialize private varaibles
        length=obj.length;
        height=obj.height;
    }
    double CalculateArea()
    {
        return length*height;
    }
};
int main()
{
    // declare class
    wall n1(5.5,5.5);
    cout<<"The area of wall is " << n1.CalculateArea();

}
