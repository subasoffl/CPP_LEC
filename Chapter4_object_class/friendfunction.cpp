#include<iostream>
using namespace std;

class Distance{
    friend int add(Distance);

    private:
    int meter;

    public:
        Distance(){
         meter = 0;
    }
};

int add(Distance d){
     d.meter = d.meter+5;
     return d.meter;

}

int main(){
    Distance dist;
    cout<<"Distance: "<<add(dist);
    return 0;

}