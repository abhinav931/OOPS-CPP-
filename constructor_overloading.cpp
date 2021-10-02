#include <iostream>

using namespace std;

class Number
{
    int a, b;

public:
    //CONSTRUCTOR OVERLOADING
    //constructor 1
    Number() // not parameterized constructor
    {
        cout << "\nObject with zero argument";
        a = 0, b = 0;
    }

    //constructor 2
    Number(int x) //parameterized constructor
    {
        cout << "\nObject with one argument";
        a = x;
        b = 0;
    }

    //constructor 3
    Number(int x, int y) //parameterized constructor
    {
        cout << "\nObject with two arguments";
        a = x, b = y;
    }

    void display()
    {
        cout << "\na= " << a << ", b=" << b;
    }
};

int main()
{
    Number p1; //constructor 1 is invoked
    p1.display();

    Number p2(12); //constructor 2 is invoked
    p2.display();

    Number p3(15, 16); //constructor 3 is invoked
    p3.display();

    Number p4 = Number(); // alternative way of defining object, constructor 1 is invoked
    p4.display();

    Number p5 = 245; // alternative way of defining object, constructor 2 is invoked
    p5.display();
}