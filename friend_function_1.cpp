#include <iostream>
using namespace std;

class Number
{
    int a, b;

public:
    Number()
    {
        a = 4;
        b = 2;
    }

    //friend function
    //must be declared inside class and defined outside the class
    friend void sum(Number);
};

//we need to pass object, so as to determine to which object , do IMVs belong.
//a and b are private IMV, friend function can access those.
void sum(Number s)
{
    cout << "a = " << s.a << ", "
         << "b = " << s.b;
}

int main()
{
    Number n1;
    sum(n1);
}