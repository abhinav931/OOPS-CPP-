#include <iostream>
using namespace std;

class Person
{
private:
    int age;

public:
    Person()
    {
        cout << "Constructor is called implicitly after object is created";
        age = 2; //IMV initialization by constructor
    }

    void display()
    {
        cout << age;
    }
};

int main()
{
    Person p1;
    p1.display();
}