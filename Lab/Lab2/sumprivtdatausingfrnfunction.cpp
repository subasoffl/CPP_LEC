#include <iostream>

using namespace std;
class Sum
{
    int a, b, add;

public:
    void input()
    {
        cout << "Enter the value of x and y:";
        cin >> a >> b;
    }
    friend void add(Sum &t);
    void display()
    {
        cout << "The sum is :" << add;
    }
};
void add(Sum &t)
{
    t.add = t.a + t.b;
}
int main()
{
    Sum t1;
    t1.input();
    add(t1);
    t1.display();
    return 0;
}