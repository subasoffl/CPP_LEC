
#include<iostream>
using namespace std;

class Student{
    public:
    double marks1, marks2;
};

Student createstudent(){
    Student student;


    student.marks1 = 96.5;
    student.marks2 = 75.0;


}
int main(){
    Student student1;
    student1 = createstudent();
    return 0;
}