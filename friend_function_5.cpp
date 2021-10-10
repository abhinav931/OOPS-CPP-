#include <iostream>
using namespace std;

class Number
{
public:
    int a;

    friend ostream &operator<<(ostream &, Number);
    friend istream &operator>>(istream &, Number &);
};

ostream &operator<<(ostream &dout, Number x)
{
    cout << "a = " << x.a;
    return (dout);
}

istream &operator>>(istream &din, Number &x)
{
    cin >> x.a;
    return (din);
}

int main()
{
    Number n1;
    cin >> n1;
    cout << n1;
}