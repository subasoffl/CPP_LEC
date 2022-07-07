#include<iostream>

using namespace std;

template<class T>
class Calculator{
private:
    T num1, num2;

public:
    Calculator(T n1, T n2){
        num1 = n1;
        num2 = n2;
    }

    void dsiplayResult(){
        cout<< "Numbers are: "<<num1 << " and " << num2 <<"." <<endl;
        cout<<"Addition is " <<add()<<endl;
        cout<<"Subtraction is " <<subtract()<<endl;
        cout<<"Product is " <<multiply()<<endl;
        cout<<"Division is " <<divide()<<endl;
        
    }



    T add(){return num1+num2; }
    T subtract(){return num1-num2; }
    T multiply(){return num1*num2; }
    T divide(){return num1/num2; }
};

int main(){
    Calculator<int> intCalc(2,1);
    Calculator<float> floatCalc(2.4, 1.24);

    cout<<"Int result is "<<endl;
    intCalc.dsiplayResult();


    cout<<"float result is "<<endl;
    floatCalc.dsiplayResult();

    return 0;
}