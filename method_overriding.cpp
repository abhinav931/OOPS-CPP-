#include <iostream>
using namespace std;

class Triangle
{
public:
    int l, b, h;

    Triangle(int x, int y, int z)
    {
        l = x;
        b = y;
        h = z;
    }
    void perimeter()
    {
        cout << "\nPerimeter of a triangle is:- " << l + b + h;
    }
};

class EquilateralTriangle : public Triangle
{
public:
    EquilateralTriangle(int x) : Triangle(x, x, x)
    {
    }

    //Method overriding - same prototype but definition different. one - in parent class, second - in child class
    void perimeter()
    {
        cout << "\nPerimeter of a triangle is:- " << 3 * l;
    }
};

int main()
{
    EquilateralTriangle t1(5);
    t1.perimeter();
}