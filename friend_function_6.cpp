#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    A()
    {
        a = 2;
        b = 4;
    }
    void func1()
    {
        cout << "\na = " << a;
    }

    void func2()
    {
        cout << "\nb = " << b;
    }
};

class B
{
    int c;
    //Member function of one class can be friend to another class
    friend class A; // for all IMFs of class A
    //friend void A::func1(); //for some IMFs of class A

public:
    B()
    {
        c = 8;
    }
    void func3()
    {
        cout << "\nc = " << c;
        A a1;
        a1.func1();
        a1.func2();
    }
};

int main()
{
    B b;
    b.func3();
}