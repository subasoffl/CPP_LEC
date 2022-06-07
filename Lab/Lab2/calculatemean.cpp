#include<iostream>

using namespace std;

class Sample {
   public:
    float value1, value2;

 
    void input(){
        cout<<"Enter first number: ";
        cin>>value1;
        cout<<"Enter second number:";
        cin>>value2;
    }

    friend float mean(Sample);
};

float mean(Sample n1) {
    return ((n1.value1 + n1.value2)/2);
}

int main() {
    Sample n;
    n.input();
    float means = mean(n);
    cout<<"The mean is:"<<means<<endl;
    return 0;
}