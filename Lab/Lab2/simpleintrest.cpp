#include<iostream>
using namespace std;
class Interest{
    public:
        double interest(float principle, float time, float rate = 0.15){
                return ((principle * time * rate) / 100);
        }
};
int main(){
    Interest i;
    double p, t, I;
    cout<<"Enter Principle";
    cin>>p;
    cout<<"Enter Time";
    cin>>t;
    I = i.interest(p, t);
    cout<<"The simple interest is:"<<I;
    return 0;
}