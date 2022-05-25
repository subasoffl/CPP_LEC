// WAP to calculate the area and volume of a room
#include <iostream> 
using namespace std;
class room {
    public:
    int length;
    int breadth;
    int height;
    
    int calculatedarea(){
        return length * breadth;
    }
     
    int calculatedvolume(){
        return length * breadth * height;
    }
};
 
 int main(){
    //  creating object for class
     room room1;
    //  assigning value to the members 
     room1.length = 5;
     room1.breadth = 5;
     room1.height = 5;
    
    cout<<"Area of the room is "<<room1.calculatedarea() <<endl;
    cout<<"Volume of the room is "<<room1.calculatedvolume() <<endl;

 }