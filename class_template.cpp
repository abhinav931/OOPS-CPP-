#include <iostream>
using namespace std;

template <class X>
class AreaOfSquare
{
    X side;

public:
    AreaOfSquare(X a)
    {
        side = a;
    }

    X calc_area()
    {
        return (side * side);
    }
};

int main()
{
    AreaOfSquare<int> a1(5);
    AreaOfSquare<float> a2(2.5);
    //At the time of object creation, X is decided
    cout << a1.calc_area() << " " << a2.calc_area();
}