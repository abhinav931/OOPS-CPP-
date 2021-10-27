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
    //By default, "implicit assignment operator" will be made in a class. That operator is overloaded. Used to perform shallow copy.
};

int main()
{
    A a1;
    A a2; 
    a2=a1; //implicit assignment operator(overloaded) will be called, and a "shallow copy" will be made
    //Shallow copy - copying data of one object, to another completely, as it is.
    a2.show();
}