#include <iostream>
using namespace std;

class A
{

public:
    int x;
    //f1 is a virtual function
    //No need to make it virtual again in child class
    //It will be automatically be virtual in child classes, once declared as virtual in parent class
    virtual void f1()
    {
        cout << "Value of square is:- " << x * x;
    }
};

class B : public A
{
public:
    B()
    {
        x = 5;
    }
    //f1 is virtual function, since defined as virtual in parent class
    void f1() //method overriding
    {
        cout << "Value of twice of x is:- " << 2 * x;
    }
};

int main()
{
    A *ptr;
    B b1;
    ptr = &b1;
    cout << "[Twice of IMV x]\n";
    ptr->f1(); //This call will be lately binded(not early) with B::f1, because f1 is virtual function
}