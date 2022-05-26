//parameterized constructors
 #include<iostream>

 using namespace std;

 class room{
     private:
     int length, breadth;

     public:

     room(double len, double bth){
         length = len;
         breadth = bth;
     }

     int calcarea(){
         return length+breadth;
     }
 };

int main(){
    room room1(20,30);

    cout<<"The area of a room is " << room1.calcarea()<< endl;

    return 0;
    

}