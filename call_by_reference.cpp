#include <iostream>

using namespace std;

int sum(int &x, int &y);

int main()
{
    int a = 2, b = 1;
    cout << sum(a, b) << "\n";
    cout << &a << " " << &b << endl;
    cout << a << " " << b; // value incremented here, because, x and y incremented. Since, x and y has reference of a and b.
                           // Therefore, even if you play with reference var in other blocks the change is reflected in the block of both vars.
}

int sum(int &x, int &y)
{
    cout << &x << " " << &y << endl;
    x++;
    y++;
    return x + y;
}