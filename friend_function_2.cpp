#include <iostream>
using namespace std;

//FRIEND FUNCTION
//USE 1 - A friend function can be friend to more than 1 class. It is beneficial when we want to access private IMVs of different class in same function

class Number2;

class Number1
{
    int a;

public:
    Number1()
    {
        a = 2;
    }

    friend void product(Number1, Number2); //FRIEND FUNCTION DECLARATION
};

class Number2
{
    int b;

public:
    Number2()
    {
        b = 2;
    }

    friend void product(Number1, Number2); //FRIEND FUNCTION DECLARATION
};

//friend function to classes Number1 and Number2, accessing private IMVs of both class in same function
void product(Number1 x, Number2 y) //FRIEND FUNCTION DEFINITION
{
    cout << "Sum = " << x.a + y.b;
}

int main()
{
    Number1 n1;
    Number2 n2;
    product(n1, n2); //FRIEND FUNCTION CALLING
}