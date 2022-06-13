// an example of multilever inheritance

#include<iostream>
using namespace std;
class person{
    private:
    char name[25];
    char address[25];
    public:
    void getdata(){
        cout<<"\nEnter Name: ";
        cin>>name;
        cout<<"\nEnter Address: ";
        cin>>address;
    }
    void showdata(){
        cout<<"\n Name : "<<name;
        cout<<"\n Address : " << address;
    }
};

class employee: public person{
    private:
    int empID;
    float salary;
    public:
    void getdata(){
        person::getdata();
        cout<<"Enter emplyee ID ";
        cin>>empID;
        cout<<"\n Enter Salary: ";
        cin>>salary;
    }
    void showdata(){
        person::showdata();
        cout<<"\n Employee ID "<<empID;
        cout<<"\n Employee Salary "<<salary;
    }
};
class manager: public employee{
    private:
    char hidegree;
    public:
    void getdata(){
        employee::getdata();
        cout<<"Enter highest degree: ";
        cin>>hidegree;
    }
    void showdata(){
        employee::showdata();
        cout<<"\n Highest degree : "<<hidegree;
    }
};
int main(){
    manager mgr;
    cout<<"Enter the data on manager : ";
    mgr.getdata();
    cout<<"\n Data on manger: ";
    mgr.showdata();
    return 0;
}