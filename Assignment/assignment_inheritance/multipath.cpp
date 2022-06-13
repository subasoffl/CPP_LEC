//ambigous base class member access
#include<iostream>
using namespace std;

class grandparent{
    private:
    int data;
    public: 
    void setdta(int n){
        data = n;
    }
    void showdata(){
        cout<<data;
    }
};
class parent1:  public grandparent //put virtual to get rid of error i.e. virtual public grandparent
{
    //
};
class parent2:  public grandparent{
    //
};

class child: public parent1, public parent2{
    public:
    void showchdata(){
       // grandparent::showdata();
        //still ambigous because paren 1 and parent2 both
        // have grandparent::Showdata();
        //showdata();
        parent1::showdata();//ok nor ambigous
        parent2::showdata();//ok nor ambigous
    }
};

int main(){
    child ch1;
    //ch1.showdata;
    // works well as overrides function of child is called
    ch1.parent1::showdata();//ok
    ch1.parent2::showdata();//ok
   // ch1.grandparent::showdata(); // error : ambigous; there are two version of grandparent::showdata
}
