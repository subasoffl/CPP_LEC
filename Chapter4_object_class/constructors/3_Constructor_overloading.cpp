#include<iostream>
using namespace std;


class Wall{
    private:
    double length, height;

    public:
    Wall(){
      length = 25, height = 30;
    }

    Wall(double len){
      length = len; 
      height = 30;

    }

    Wall(double len, double hei){
      length = len;
      height = hei;


    }

    double calculatedarea(){
       return length*height;
    }

};

int main(){
    Wall n1;
    Wall n2(23);
    Wall n3(20, 22);

    cout<< "The area of n1 is" << n1.calculatedarea();
    cout<< "The area of n2 is" << n2.calculatedarea();
    cout<< "The area of n3 is" << n3.calculatedarea();


}