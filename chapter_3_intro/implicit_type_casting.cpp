#include<iostream>
using namespace std;
int main ()
{
    //declaring an int value to num_int
    int num_int =9;
    // declaring a oduble type varaiable
    double num_double;
    char char_test;
    // implict conversion
    //  assigning int value to a double varaiable
    num_double =num_int;
    char_test=num_int;
    cout <<"num_int= "<<num_int<<endl;
    cout<<"num_double= "<<num_double<<endl;
    cout<<"char_test= "<<char_test<<endl;
    return 0;
}