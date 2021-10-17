#include <iostream>

using namespace std;

class A
{
    int a;
};

class B : public A
{
    int b;
};

int main()
{
    A a1, *ptrA;
    B b1, *ptrB;

    ptrA = &a1; //Base class pointer can have address if its object

    ptrB = &a1; //Child class pointer can't have address of parent class object
}