#include <iostream>

using namespace std;

class A
{
private:
    int a;

public:
    int b;

protected:
    int c;
};

class B : public A
{
public:
    void set_data(B obj)
    {
        obj.a; //private member in parent class, private in child class
        obj.b; // public member in parent class, public in child class
        obj.c; // protected member in parent class, protected member in child class as well
    }
};

int main()
{
    A a1;
    a1.a; //private members are not directly accessible
    a1.b;
    a1.c; //protected members are access

    B b1;
    b1.a; //private member in parent class
    b1.b;
    b1.c; // protect members are not directly accessible
}