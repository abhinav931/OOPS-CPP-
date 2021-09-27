#include <iostream>

using namespace std;

int sum(int *x, int *y);

int main()
{
    int a = 2, b = 1;
    cout << "Address of both variables are:- " << &a << " " << &b << endl;
    cout << "Sum of a nd b is :- " << sum(&a, &b) << endl;
    cout << "Value of a and b must have incremented:- " << a << " " << b;
}

int sum(int *x, int *y)
{
    cout << "Value of x and y must be the address of a and b:- " << x << " " << y << endl;
    (*x)++;
    (*y)++;
    return *x + *y;
}