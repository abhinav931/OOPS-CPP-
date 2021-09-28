#include <iostream>
#define PI 3.14

using namespace std;
/*
Function overloading is a compile time polymorphism because,
compiler, at compile time, decides that mapping of function call
to its definition.
*/
int area(int);      //early binded to area of circle, rule=exact match of type of args.
int area(int, int); //early binded to area of rectangle, rule=exact match of type of args.

int main()
{
    int radius = 4;
    cout << area(radius) << endl;

    int l = 5, b = 6;
    cout << area(l, b);

    return 0;
}

int area(int radius)
{
    return PI * radius * radius;
}

int area(int length, int breadth)
{
    return length * breadth;
}