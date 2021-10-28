#include <iostream>

using namespace std;

class A
{
    int a, b;
    int *p;
    public:
    A(int x, int y, int z)
    {
        a=x;
        b=y;
        p = new int;
        *p=z;
    }
    void show()
    {
        cout<<a<<" "<<b<<" "<<*p<<endl;
    }

    //deep copy is made for objects having pointer. Such that pointed memory blocks would also get copied.
    A(A &a1)
    {
        a=a1.a;
        b=a1.b;
        p = new int;
        *p=*(a1.p);
    }
};

int main()
{
    A a1(1, 2, 6);
    A a2=a1;
    a1.show();
    a2.show();
}