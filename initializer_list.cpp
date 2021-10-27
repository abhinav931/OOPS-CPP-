#include <iostream>

using namespace std;

class A
{
    int a, b;
    int &d;
    const int c;

    public:
    //for initialization of const members , initializer list is used
    // A():a(1), b(2), c(5)
    // {
    //     // c=5;// wrong for const members
    // }

    //for initialization of reference variable, initializer list is used
    A(int &t):d(t), c(5)
    {
    }

};