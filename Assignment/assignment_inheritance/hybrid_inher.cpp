// an example of hybrid inheritance

#include<iostream>
using namespace std;

class person{
    private:
    char name[25];
    int age;
    public:
    void getdata(){
        cout<<"\n Enter name: ";
        cin>>name;
        cout<<"Enter age : ";
        cin>>age;
    }
    void showdata(){
        cout<<"\nName : "<<name;
        cout<<"\nAge : "<<age;
    }
};
class exam{
    protected:
    int marks1, marks2, marks3;
    public:
    void getdata(){
        cout<<"Enter Internal marks in three subjects: ";
        cin>>marks1>>marks2>>marks3;
    }
    void showdata(){
        cout<<"Internal Marks in subject 1: "<<marks1;
        cout<<"Internal Marks in subject 2: "<<marks2;
        cout<<"Internal Marks in subject 3: "<<marks3;
    }
};

class student:public person{
    private:
    int studID;
    char stream[10];
    public:
    void getdata(){
        cout<<"\n Enter Student ID: ";
        cin>>studID;
        cout<<"Enter stream : ";
        cin>>stream;
    }
    void showdata(){
        cout<<"\nStudent ID : "<<studID;
        cout<<"\nStream : "<<stream;
    }
};
class result:public student, public exam{
    private:
    int total;
    public:
    void getdata(){
        student::getdata();
        exam::getdata();
    }
    void showdata(){
        student::showdata();
        exam::showdata();
        total = marks1+marks2+marks3;
        cout<<"\n Total marks = "<<total;
        cout<<"\n Percentage = "<<static_cast<float>(total)/3;
    }
};

int main(){
    result r;
    cout<<"Enter data for result processing"<<endl;
    r.getdata();
    cout<<"\n Data on student "<<endl;
    r.showdata();
    return 0;
}