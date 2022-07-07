#include<iostream>
using namespace std;
class student
{
    protected:
    char name[50];
    int roll;
    public:
    void getdata()
    {
        cout<<"Enter the name of student:"<<endl;
        cin>>name;
        cout<<"Enter the roll of student:"<<endl;
        cin>>roll;
    }
    void showdata()
    {
        cout<<"Name of student is : "<<name<<endl;
        cout<<"Roll:"<<roll<<endl;
    }
};
class test: public student
{
    protected:
    int math;
    int eng;
    public:
    void getdata()
    {
        student::getdata();
        cout<<"Marks in math:"<<endl;
        cin>>math;
        cout<<"Marks in english:"<<endl;
        cin>>eng;
    }
    void showdata()
    {
        student::showdata();
        cout<<"Math marks is :"<<endl;
        cout<<"English marks is :"<<endl;
    }
};
class sport: public student
{
    protected:
    int score;
    public:
    void getdata()
    {
        
        cout<<"Score in sport :"<<endl;
        cin>>score;
    }
    void showdata()
    {
        
        cout<<"Sport score is :"<<endl;
    }
};
class result:public test,public sport
{
    protected:
    int result;
    public:
    void getdata()
    {
        test::getdata();
        sport::getdata();
    }
    void showdata()
    {
        test::showdata();
        sport::showdata();
        result=math+eng+score;
        cout<<"The total result is :"<<result<<endl;
    }
};
int main()
{
    result r;
    r.getdata();
    r.showdata();
}

