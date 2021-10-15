#include <iostream>
using namespace std;

class A
{
    int a;

public:
    //2. Then parent class constructor is called and executed
    A(int x)
    {
        a = x;
        cout << "\nParent class constructor called.";
    }
};

class B : public A
{
public:
    //1. First child class constructor is called
    //3. Finally , child class constructor is executed
    B() //ERROR - no default constructor for class A
    {
        cout << "\nChild class constructor called.";
    };
};

int main()
{
    B b1;
}