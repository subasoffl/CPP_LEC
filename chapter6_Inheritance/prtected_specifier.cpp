//We need Protected Member if we want to hide the data of a class 

#include<iostream>
using namespace std;

//base class


class Parent{
    //protected data members
    protected:
    int id_protected;
};

//sub class pr derived class from public base class
class Child : public Parent{
    public:
    void setID(int id){
        //child class is able to access the inherited 
        //protected data members od base class
        id_protected = id;
    }

    void displayID(){
        cout<<"id_protected is:"<<id_protected<<endl;
    }
};
//main function
int main(){
    Child obj1;

    //member function of the derived class can access the protected data member of the base class
    obj1.setID(81);
    obj1.displayID();
    return 0;

}
