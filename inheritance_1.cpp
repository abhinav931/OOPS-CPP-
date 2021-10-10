#include <iostream>

using namespace std;

class Person //Base Class
{
    int age;
    char *name;

public:
    Person()
    {
        age = 1;
        name = "Anonymous";
    }

    void set_data1(char *n, int a)
    {
        name = n;
        age = a;
    }

    void display_data1()
    {
        cout << "Person " << name << " is of age: " << age << endl;
    }
};

class Employee : public Person //Employee is a derived class
{
    int emp_id;

public:
    Employee()
    {
        emp_id = 1;
    }

    void set_data(char *n, int a, int id)
    {
        set_data1(n, a); //accessing public IMF of base class in child class
        emp_id = id;
        //IMVs of base class is accessible in child class, if they are public
    }

    void display_data()
    {
        display_data1();
        cout << "My employee ID is: " << emp_id << endl;
    }
};

int main()
{
    Employee emp;
    emp.display_data();

    Employee emp1;
    emp1.set_data("Krishna", 5000, 2);
    emp1.display_data();
}