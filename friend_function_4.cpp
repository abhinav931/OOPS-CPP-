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

    friend int operator-(Number);
};

// overloading using friend function
int operator-(Number n1)
{
    return -n1.a;
}

int main()
{
    Number n1(5);
    cout << -n1; // c3 = operator-(n1);
    //OR
    // cout << operator-(n1);
}