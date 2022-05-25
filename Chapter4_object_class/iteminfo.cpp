#include<iostream>
using namespace std;
class iteminfo
{
    private:
    int itemid;
    float cost;
    public:
    void setdata(int a,float b){
        itemid=a;
        cost=b;
    }
    void showdata(){
        cout<<"\nItem ID:\t"<<itemid;
        cout<<"\nCost:\t"<<cost<<endl;
    }
};
int main(){
    iteminfo i1,i2;
    i1.setdata(55,35.50);
    i2.setdata(50,60.9);
    cout<<"\n Information on first item";
    i1.showdata();
    cout<<"\n Infomration on Second item";
    i2.showdata();
}