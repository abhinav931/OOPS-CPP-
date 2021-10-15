#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A(int x)
    {
        a = x;
        cout << "\nParent class constructor called.";
    }

    void set()
    {
        cout << "\na = " << a;
    }
};

int main()
{
    A a1(3);
    A *p = &a1;
    p->set(); // p is object pointer
}