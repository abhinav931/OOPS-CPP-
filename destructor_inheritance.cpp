#include <iostream>
using namespace std;

class A
{

public:
    //2. Parent class destructor is called and executed
    ~A()
    {
        cout << "\nParent class destructor is called.";
    }
};

class B : public A
{
public:
    //1. Child class destructor is called and executed
    ~B()
    {
        cout << "\nChild class destructor is called.";
    }
};

int main()
{
    B b1;
}