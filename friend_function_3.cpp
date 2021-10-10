#include <iostream>
using namespace std;

class Number
{
private:
    int a;

public:
    Number(int x)
    {
        a = x;
    }

    friend int operator+(Number, Number);
};

// overloading using friend function
int operator+(Number n1, Number n2)
{
    return n1.a + n2.a;
}

int main()
{
    Number n1(5), n2(4);
    // cout << n1 + n2; // c3 = operator+(n1, n2);
    //OR
    cout << operator+(n1, n2);
}