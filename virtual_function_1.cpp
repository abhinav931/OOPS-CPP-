#include <iostream>
using namespace std;

class A
{

public:
    int x;
    void f1()
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
    void f1()
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
    ptr->f1(); //this calls A::f1, but address it contains, is of b1.
    //To solve above problem, we use late binding, and virtual function helps us achieve that

    //STATIC BINDING - Base of binding is type of variable.
    //PROBLEM OCCURENCE REASON - At compile time, memory is not allocated. There ptr value is unknown at time of compile time binding or early binding.
    //PROBLEM SOLUTION - If a function is virtual , compiler understands, that it doesn't have to do early binding. Instead, it has to do late binding(during runtime when memory is allocated)
}