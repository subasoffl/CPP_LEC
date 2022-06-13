//overvect.cpp
//overriding member function for vector

#include<iostream>
using namespace std;
const int MAX=5;

class vector
{
    protected:
    int arr[MAX];
    int size;
    
    public:
    vector() {size=0;}
    int &getset (int index)
    {
        return arr[index];
    }
    void additem (int num)
    {
        arr[size++]= num;
    }
    int removeiteam()
    {
        return arr[--size];
        
    }
};
class vector2 : public vector
{
    public:
    void additem (int num)
    {
        if ((size>=MAX))
        cout <<"Error: vector is full">>endl;
        else 
        vector:additem(num);
    }
    void removeitem()
    {
        if(size<=0)
        cout<<"Error: vector is emppty"<<endl;
        else
        vector::removeiteam();
    }
};

int main()
{
    vector v2;
    v2.additem(1);
    v2.additem(2);
    v2.additem(3);
    v2.additem(4);
    v2.getset(2)=7;

    cout<<"Elements in the vector after adding:";
    for(int i=0; i<4; ++i)
    cout<<v2.getset(i)<< "  ";
    cout<<"\nDisplay elements by removing: ";
   for (int i = 0; i < 4; i++)
     cout<<v2.removeiteam()<< "  ";
     system("pause");

     return 0;

   
    
}

       
        
  


