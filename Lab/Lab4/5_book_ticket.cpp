#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
class Person 
{
    protected:
    char name[30];
    int age ;
    public:
    Person()
    {
        cout<<"Enter your name :"<<endl;
        cin>>name;
        cout<<"Enter your age :"<<endl;
        cin>>age;
    }
    void showData()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
class Reservation 
{   
    Person p;
    protected:
    int Rid ;
    int date;
    char Rdate[30];
    public:
    Reservation()
    {   
        srand(time(0));//random number generator
        Rid = rand();
        cout<<"Enter date for reservation day"<<endl;
        cin >> Rdate;
    }
    void showData()
    {   
        p.showData();
        cout<<"Date of reservation is :"<<Rdate<<endl;
        cout<<"unique Rid is :"<<Rid<<endl;
    }
};
int main(){
Reservation r1;
r1.showData();
}