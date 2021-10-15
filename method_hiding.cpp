#include <iostream>
using namespace std;

class A
{
public:
    void func()
    {
        cout << "Parent class func()";
    }
};

class B
{
    int a;

public:
    void func(int x)
    {
        a = x;
        cout << "\nChild class func(x)";
    }
};

int main()
{
    B b1;
    //b1.func(); //error - compiler first searches class B for mapping, since type(b1)=B
    //But, since func founded in child class , compiler wont jump to parent class for mapping quest
    //And, since, there are arguments mismatch, error is generated
    //FUnction overloading is possible , only when, functions are present in same class
    b1.func(2); // Early binded to B::func
}