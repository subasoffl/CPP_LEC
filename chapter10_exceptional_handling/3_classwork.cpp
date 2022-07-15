//  wap to read name roll number and marks that catches 
//  multiple exceptional if number is negative or marks is
//  higher than Full marks

#include<iostream>
using namespace std;

class Student{
    protected:
    char name[20];
    int roll, marks;
    public:
    class rollerr{};
    class markserr{};
    void getdata(){
        cout<<"Enter the name of student";
        cin>>name;
        cout<<"Enter the Roll of student";
        cin>>roll;
        if (roll<0)
            throw rollerr();
        cout<<"Enter the Marks of student";
        cin>>marks;
        if (marks>100)
            throw markserr();
    }
    void showdata(){
        cout<<"Name"<<name;
        cout<<"Roll No"<<roll;
        cout<<"MArks"<<marks;
    }
};

int main(){
    Student S;
    try
    {   
        cout<<"Student Info";
        S.getdata();
        S.showdata();
    }
    catch(Student::rollerr)
    {
       cout<<"Input Rollnumber is error";
    }
    catch(Student::markserr)
    {
       cout<<"Input Rollnumber is error";
    }
    return 0;
    
}
