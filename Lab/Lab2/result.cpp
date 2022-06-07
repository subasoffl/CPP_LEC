
#include<iostream>
using namespace std;
class Student {
    private:
    char name[50];
    int roll;
    char address[100];
    float percentage;
    public:
        void input() {
            cout<<"Enter Name: ";
            cin>>name;
            cout<<"Enter Roll: ";
            cin>>roll;
            cout<<"Enter address: ";
            cin>>address;
            cout<<"Enter Percentage";
            cin>>percentage;
        }
        void display() {
            if(percentage > 45) {
                cout<<"Congratulations! ";
                cout<<"Name: " <<name;
                cout<<"Roll: " <<roll;
                cout<<"Address: "<<address;
                cout<<"Percentage: "<<percentage;
            } else {
                cout<<"Sorry, you failed the test";
            }
        }
};
int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}