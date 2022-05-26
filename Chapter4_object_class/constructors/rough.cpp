
#include<iostream>

using namespace std;

class wall{
    private:
        double lenght;
    
    public:
    wall(){
        lenght = 5.5;
        cout<< "Creatinf a wall." <<endl;
        cout<<"length : " <<lenght <<endl;
    
    }

};

int main(){
    wall wall1;
  return 0;

}