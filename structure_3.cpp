#include <iostream>

using namespace std;

//Unlike C, structure in C++ follows encapsulation
struct dog
{
    //member variables
    char name[20];
    int age;

    //member functions
    void output()
    {
        cout << "Dog " << name << ", is of age:- " << age;
    }

    void input()
    {
        cin >> name >> age;
    }
};

int main()
{
    dog d1;
    d1.input();
    d1.output();
}