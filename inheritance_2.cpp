#include <iostream>

using namespace std;

class A
{
private:
    int a;

public:
    int b;

protected:
    int c;
};

//VISIBILITY MODE = private
class B : private A
{
public:
    void set_data(B obj)
    {
        //1. In parent class - private, inaccessible in child class
        obj.a; //private members of parent class are inaccessible in child class

        //2. In parent class - public, in child class private
        obj.b; //public members of parent class are accessible in child class

        //3. In parent class - protected, in child class private
        obj.c; //protected members of parent class are accessible in child class
    }
};

int main()
{
    B b1;
    b1.a; //private members of parent class are inaccessible by child class object directly.
    b1.b; //In parent class - public, in child class private
    b1.c; //In parent class - protected, in child class private

    A a1;
    a1.c; //protected members are inaccessible by the class object in which it is declared
}