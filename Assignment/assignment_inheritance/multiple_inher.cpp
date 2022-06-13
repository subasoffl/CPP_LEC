//multiple_inher.cpp
//an example of multiple inheritance

#include<iostream>
using namespace std;

class student
{
    private:
    char name[25];
    int studID;

    public:
    void getdata()
    {
        cout<<"\n Enter name: ";
        cin>>name;
        cout<<"Enter student id: ";
        cin>>studID;
    }
    void showdata()
    {
    cout<<"\n Name: "<<name;
    cout<<"\n Student ID: "<<studID;
    }

};
class employee
{
    private:
    char org_name[50];
    char union_name[50]; 
    int empID;
    
    
    public:
    void getdata()
    {
        cout<<"Enter Name of associated OrganizationL: ";
        cin>>org_name;
        cout<<"\nEnter employee ID: ";
        cin>>empID;

    }
    void showdata()
    {
        cout<<"\nName of associated student union: "<<union_name;
        cout<<"\nEmployeeID: "<<empID;

    }

};

class marketing_officer: public student, public employee{
    private:
    int working_hour;
    public:
    void getdata()
    {
        student::getdata();
        employee::getdata();
        cout<<"Enter working hours: ";
        cin>>working_hour;
    }
    void showdata()
    {
        student::showdata();
        employee::showdata();
        cout<<"\nWorking hour: "<<working_hour;

    }
};

int main()
{
    marketing_officer moff;
    cout<<"Enter data of marketing officer:"<<endl;
    moff.getdata();
    cout<<"\n Data of marketing officer"<<endl;
    moff.showdata();

    return 0; 

}