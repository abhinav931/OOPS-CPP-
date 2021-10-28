#include <iostream>
using namespace std;

class Complex
{
    int a, b;
    public:
    Complex(int x)
    {
        a=x;
        b=0;
    }

    void show()
    {
        cout<<"a = "<<a<<", b = "<<b;
    }
};

int main()
{
    int m=4;

    Complex c1=m; //Complex(int x) constructor will be called and int(primitive type) will be converted to Complex(class type)

    c1.show();
}