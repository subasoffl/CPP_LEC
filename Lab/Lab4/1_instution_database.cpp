#include<iostream>
using namespace std;
class staff
{
    protected:
    int code;
    char name[50];
    public:
    void getdata()
    {
        cout<<"Code of staff:"<<endl;
        cin>>code;
        cout<<"Name of staff:"<<endl;
        cin>>name;
    }
    void showdata()
    {
        cout<<"The code of staff is"<<code;
        cout<<"Tje name of staff is"<<name;
    }
};
class teacher:public staff
{
    protected:
    char subject[50];
    char publication[50];
    public:
    void getdata()
    {
        cout<<"TEACHER"<<endl;
        staff::getdata();
        cout<<"Subject of teacher:"<<endl;
        cin>>subject;
        cout<<"Publication of book:"<<endl;
        cin>>publication;
    }
    void showdata()
    {
        cout<<"TEACHER"<<endl;
        staff::showdata();
        cout<<"Subject of teacher is :"<<subject<<endl;
        cout<<"Publication of book is :"<<publication<<endl;
    }
};
class officer:public staff
{
    protected:
    char grade[50];
    public:
    void getdata()
    {
        cout<<"OFFICER"<<endl;
        staff::getdata();
        cout<<"Grade of officer:"<<endl;
        cin>>grade;
    }
    void showdata()
    {
        cout<<"OFFICER"<<endl;
        staff::showdata();
        cout<<"Grade of officer is :"<<grade<<endl;
    }
};
class typist:public staff
{
    protected:
    int speed;
    public:
    void getdata()
    {
        cout<<"TYPIST"<<endl;
        staff::getdata();
        cout<<"Typing speed of typist:"<<endl;
        cin>>speed;
    }
    void showdata()
    {
        cout<<"TYPIST"<<endl;
        staff::showdata();
        cout<<"Speed of typist is :"<<speed<<endl;
    }
};
class casual:public typist
{
    protected:
    float daily_wages;
    public:
    void getdata()
    {
        cout<<"CASUAL TYPIST"<<endl;
        typist::getdata();
        cout<<"Daily wages of typist :"<<endl;
        cin>>daily_wages;
    }
    void showdata()
    {
        cout<<"CAUSUAL TYPIST"<<endl;
        typist::showdata();
        cout<<"Daily wages of typist is :"<<daily_wages<<endl;
    }
};
class regular:public typist
{
    protected:
    float daily_wages;
    public:
    void getdata()
    {
        cout<<"REGULAR TYPIST"<<endl;
        typist::getdata();
        cout<<"Daily wages of typist :"<<endl;
        cin>>daily_wages;
    }
    void showdata()
    {
        cout<<"REGULAR TYPIST"<<endl;
        typist::showdata();
        cout<<"Daily wages of typist is :"<<daily_wages<<endl;
    }
};
int main()
{
    teacher t;
    officer o;
    casual c;
    regular r;
    t.getdata();
    t.showdata();
    o.getdata();
    o.showdata();
    c.getdata();
    c.showdata();
    r.getdata();
    r.showdata();

}