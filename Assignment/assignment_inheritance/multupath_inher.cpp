//an example of multipath inheritance

#include<iostream>
using namespace std;

class student{
    protected:
    int studID;
    char name[25];
    public: 
    void getstdata(){
        cout <<" \nEnter student ID: ";
        cin>>studID;
        cout<<"\nEnter name : ";
        cin>>name;
    }
    void showsdata(){
        cout<<"\nStudent id : "<<studID;
        cout<<"\n student name: "<<name;
    }
};
class InternalExam: virtual public student{
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
    int totinternalMarks(){
        return(marks1+marks2+marks3);
    }
};
class ExternalExam: virtual public student{
    protected:
    int marks1, marks2, marks3;
    public:
    void getdata(){
        cout<<"Enter External marks in three subjects: ";
        cin>>marks1>>marks2>>marks3;
    }
    void showdata(){
        cout<<"External Marks in subject 1: "<<marks1;
        cout<<"External Marks in subject 2: "<<marks2;
        cout<<"External Marks in subject 3: "<<marks3;
    }
    int totExternalMarks(){
        return(marks1+marks2+marks3);
    }
};
class result: public InternalExam, public ExternalExam{
public:
void getdata(){
    InternalExam:getdata();
    ExternalExam:getdata();
}
void showdata(){
    InternalExam:showdata();
    ExternalExam:showdata();
}
int TotalMarks(){
    return(totinternalMarks()+totExternalMarks());
}
};

int main(){
    result r;
    cout<<"\n Enter the data for student" <<endl;
    r.getstdata();
    cout<<"\nEnter marks "<<endl;
    r.getdata();
    cout<<"\n DAta from student is "<<endl;
    r.showdata();
    cout<<"Total marks = "<<r.TotalMarks();
    return 0;
}