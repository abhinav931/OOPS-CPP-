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

    int show_data1()
    {
        return a;
    }
};

class B : public A
{
    int b;

public:
    //1. First child class constructor is called
    //3. Finally , child class constructor is executed
    B(int x, int y) : A(y)
    {
        cout << "\nChild class constructor called.";
        b = x;
    };

    void show_data()
    {
        cout << endl
             << show_data1() << " " << b;
    }
};

int main()
{
    B b1(12, 23);
    b1.show_data();
}