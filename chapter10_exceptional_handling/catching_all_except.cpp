#include<iostream>
using namespace std;


class Array{
    private:
    int array[10];
    public:
    class Highrange{};
    class Lowrange{};
    int &operator [](int i){
        if(i<0)
            throw Lowrange();
        else if (i>=10)
            throw Highrange();
        return array[i];
    }
};

int main(){
    Array a1;
    int index;
    try{
        cout<<"Enter array Index: ";
        cin>>index;
        a1[index]=10;
        cout<<index<<"is within the range"<<endl;
    }
    catch(...){
        cout<<"Exception: out of range";
    }
    return 0;
}