#include<iostream>
using namespace std;
class person
{
    protected:
    char name[50];
    int code;
    public:
    void getdata()
    {
        cout<<"Enter the name of student:"<<endl;
        cin>>name;
        cout<<"Enter code of student:"<<endl;
        cin>>code;
    }
    void showdata()
    {
        cout<<"Name is student is:"<<name;
        cout<<"Code of student is:"<<code;
    }
    void update_data()
    {
         cout<<"Enter the name of student:"<<endl;
        cin>>name;
        cout<<"Enter code of student:"<<endl;
        cin>>code;
        
    }
};
class account:public virtual person
{
    protected:
    int pay;
    public:
    void getdata()
    {
        cout<<"Enter the amount to pay:"<<endl;
        cin>>pay;
    }
    void showdata()
    {
        cout<<"Person needs to pay :"<<pay<<endl;
    }
    void update_data()
    {
        cout<<"Enter the amount to pay:"<<endl;
        cin>>pay;

    }
};
class admin: public virtual person
{
    protected:
    int experience;
    public:
    void getdata()
    {
        cout<<"Enter experience in years:"<<endl;
        cin>>experience;
    }
    void showdata()
    {
        cout<<"Person experience is:"<<experience<<endl;
    }
    void update_data()
    {
        cout<<"Enter experience in years:"<<endl;
        cin>>experience;

    }
};
class master: public account,public admin
{
    public:
    void getdata()
    {
        person::getdata();
        account::getdata();
        admin::getdata();
    }
    void showdata()
    {
        person::showdata();
        account::showdata();
        admin::showdata();
    }
    void update_data()
    {
        person::update_data();
        account::update_data();
        admin::showdata();
    }
};
int main()
{
    master m;
    m.getdata();
    int yes;
    cout<<"If you want to update press 1 for yes else press any buttom:"<<endl;
    cin>>yes;
    if(yes=1)
    {
        m.update_data();
        m.showdata();
    }
    else 
    {
        m.showdata();

    }
    
}