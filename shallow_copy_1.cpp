#include <iostream>

using namespace std;

class A
{
    int a, b;
    public:
    A()
    {
        a=2;
        b=4;
    }
    void show()
    {
        cout<<"a = "<<a<<", "<<"b = "<<b;
    }
    //By default, copy constructor will be made by compiler
};

int main()
{
    A a1;
    A a2=a1; //copy constructor will be called, and a "shallow copy" will be made
    //Shallow copy - copying data of one object, to another completely, as it is.
    a2.show();
}