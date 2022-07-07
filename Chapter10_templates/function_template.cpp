#include<iostream>

using namespace std;

template<class T1, class T2>
void testfunc(T1 a, T2 b){
    cout<<a<<" "<<b<<endl;
}

int main(){
    int inum = 5;
    float fnum = 7.5;
    testfunc(inum, fnum);
    //equivalent to testfunction<int, float>(inum, fnum)

    testfunc(20, "Let's make this world better place");
//equivalent to testfunc <int, string>(inum, char)

    return 0;

}