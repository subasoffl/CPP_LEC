//an example of hiearchical inheritance

#include<iostream>
using namespace std;

class employee{
    private:
    char name[25];
    int empID;
    float salary;
    public:
    void getdata(){
        cout<<"\n Enter Name";
        cin>>name;
        cout<<"\n Enter Employee ID"; 
        cin>>empID;
        cout <<" Enter Salary";
        cin>>salary;
    }  
    void showdata(){
        cout<<"\n Name : "<<name;
        cout<<"\n Employee ID :" <<empID;
        cout<<"\n salary :"<<salary;
    }
};

class manager: public employee{
    private:
    char hidegree[6];
    public:
    void getdata(){
        employee::getdata();
        cout<<"Enter highest degree obtained: ";
        cin>>hidegree;
    }
    void showdata(){
         employee::showdata();
        cout<<"highest degree"<<hidegree;
    }
};
class secretary: public employee{
    private:
    float height;
    public:
    void getdata(){
        employee ::getdata();
        cout<<"Enter height : ";
        cin>>height;
    }
};
class teacher:public employee{
    private:
    int nperiods;
    public:
    void getdata(){
        employee::getdata();
        cout<<"\n Enter number of periods allocated: ";
        cin>>nperiods;
    }
    void showdata(){
        employee::showdata();
        cout<<"\n Number of preriods allocated: "<<nperiods;
    }

};

int main(){
    manager m;
    secretary s;
    teacher t;
    cout<<"\n Enter data on manager ";
    m.getdata();
    cout<<"\n Enter data on secretaruy ";
    s.getdata();
    cout<<"\n Enter data on teacher ";
    t.getdata();
    cout<<"\n  Data on manager ";
    m.showdata();
    cout<<"\n Data on secretaruy ";
    s.showdata();
    cout<<"\n Data on teacher ";
    t.showdata();
    return 0;
}