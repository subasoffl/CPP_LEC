#include<iostream>
using namespace std;
class Media
{
    protected:
    char title[50];
    char publication[50];
    public:
    virtual void readdata()
    {
        cout<<"Enter the title:"<<endl;
        cin>>title;
        cout<<"Enter the publication:"<<endl;
        cin>>publication;

    }
    virtual void shwodata()=0;
};

class Books: public Media
{
    protected:
    int numpage;
    public:
    void readdata()
    {
        Media::readdata();
        cout<<"Enter the number of pages:"<<endl;
        cin>>numpage;
    }
    void shwodata()
    {
        cout<<"Number of pages is:"<<numpage<<endl;
    }


};
class DVD: public Media
{
    protected:
    int time;
    public:
    void readdata()
    {
        Media::readdata();
        cout<<"Enter the time duration in munites:"<<endl;
        cin>>time;
    }
    void showdata()
    {
        cout<<"The time duration is:"<<time<<endl;
    }
}