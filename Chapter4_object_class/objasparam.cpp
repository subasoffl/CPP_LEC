// C++ to calculate the average area  of four wall of a room


#include <iostream>

using namespace std;

class wall{
    public:
    float area;


    wall(float a){
        area = a;
    }
};


    void calculateAverage(wall w1, wall w2, wall w3, wall w4){
        float average = ( w1.area + w2.area + w3.area + w4.area)/4;

        cout<<"Average area of a wall is "<<average;

    }



    


int main(){
    wall w1(25.6), w2(24.8), w3(34.5), w4(35.6);

    calculateAverage(w1, w2, w3, w4);

    return 0;



}