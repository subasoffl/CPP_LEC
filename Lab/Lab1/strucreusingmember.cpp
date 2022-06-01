

// wap in c++ to read the record of students name address and roll, and display of 5 students



#include <iostream>

using namespace std;

struct student {
    char name[50];
    int roll;
    char address[50];
}s[5];

int main ()
{
    int i=0;
    ;



    for(i = 0; i < 5; i++)
    {
    cout<<"Enter the name of student: ";
    cin>> s[i].name; 

    cout<<"Enter the Roll of student: ";
    cin>> s[i].roll; 

    cout<<"Enter the Address of student: ";
    cin>> s[i].address; 
    }


    cout<<"Displaying the information of students" <<endl;
    cout<<"List of student";
    for( i = 0; i < 5; i++)
    {
    cout<<"Name: "<<s[i].name <<endl;
    cout<<"Roll No. : "<<s[i].roll <<endl;
    cout<<"Address : "<<s[i].address <<endl;
    }


}
