#include<iostream>
using namespace std;
class fibonacci
{
    private:
    int x;
    int y;
    public:
    fibonacci()
    {
        x=0;
        y=1;
    }
    void operator ++(int)
    {
    int temp ;
      temp = y;
      y = x + y;
      x = temp;
    }
    void showdata()
    {
        cout<<y<<"\t";
    }

};
int main()
{
    fibonacci f;
    int n;
    int i;
    cout<<"The the number of term in fibonnaci series:"<<endl;
    cin>>n;
    cout<<"Fibonacci series"<<endl;
    cout<<"0"<<"\t";
    for(i=0;i<=n;i++)
    {
        f++;
        f.showdata();

    }
}