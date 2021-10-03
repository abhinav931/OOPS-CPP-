#include <iostream>

using namespace std;

class Person
{
private:
    int age;
    char *name;

public:
    Person()
    {
        age = 4;
        name = "\nAnonymous";
    }

    void display()
    {
        cout << "\nPerson " << name << " is of age:- " << age;
    }

    //copy constructor - it will result in recursion, take reference of object in formal args.
    // Person(Person p)
    // {
    //     name = p.name;
    //     age = p.age;
    // }

    //copy constructor - made by us, therefore compiler won't make copy and default constructor both
    Person(Person &p)
    {
        age = p.age;
        name = p.name;
    }
};

int main()
{
    Person p1;
    p1.display();
    Person p2(p1);
    p2.display();
}