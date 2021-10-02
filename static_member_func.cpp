#include <iostream>

using namespace std;

class Number
{
    int num1;

public:
    static int num2;
    static void set(int x)
    {
        num2 = x;
    }

    static void display1()
    {
        cout << num2 << endl;
    }

    void set1(int x)
    {
        num2 = x;
    }

    void display()
    {
        cout << num2 << endl;
    }
};

int Number::num2;

int main()
{
    Number n1;

    //1. Instance accessing SMV(if public, error if private)
    cout << n1.num2 << endl;

    //2. Instance setting the value of SMV(if public, error if private)
    n1.num2 = 78;
    n1.display();

    //3. IMF accessing SMV
    n1.set1(12);
    n1.display();

    //4. If object not made, SMV can be accessed and set as:-
    //4.1 via membership label
    Number::num2 = 14;            //(if public, error if private)
    cout << Number::num2 << endl; //(if public, error if private)

    //4.2 via SMF
    Number::set(35);
    n1.display1(); //instance can access SMF
}