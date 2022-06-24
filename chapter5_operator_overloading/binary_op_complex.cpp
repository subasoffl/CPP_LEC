#include<iostream>

using namespace std;

class complex{
    private:
        float real, imag;
    
    public:
        complex(){
            imag = 0;
            real = 0;
        }

        void getdata(){
            cout<<"Enter the real  number"<<endl;
            cin>>real;
            cout<<"Enter the imaginary  number"<<endl;
            cin>>imag;
        }

        complex operator + (complex &c1){
            complex temp;
            cout<<real<<endl<<imag<<endl; 
            temp.real = real + c1.real;
            temp.imag = imag + c1.imag;
            return temp;
        }

        void display(){
            cout<<" The sum of the complex numbers is "<<real <<"+ "<<imag<<"i"<<endl;
        }
};      

int main(){
    complex obj1, obj2, obj3;
    obj1.getdata();
    obj2.getdata();

    obj3 = obj1+obj2;
    
    obj3.display();

}