// wap in c++ to read the record of students name address and roll, and display


#include <iostream>

using namespace std;

struct student {
    char name[50];
    int roll;
    char address[50];
};

int main ()
{
    student s;
    cout<<"Enter the name of student: ";
    cin>>s.name; 

    cout<<"Enter the Roll of student: ";
    cin>>s.roll; 

    cout<<"Enter the name of student: ";
    cin>>s.address; 

    cout<<"Displaying the information of students" <<endl;
    cout<<"Name: "<<s.name <<endl;
    cout<<"Roll No. : "<<s.roll <<endl;
    cout<<"Name: "<<s.address <<endl;



}
