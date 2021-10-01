#include <iostream>
#include <string.h>
using namespace std;

//Class
class Person
{
    char *name;
    int age;

public:
    void set_data(char *a, int b)
    {
        name = a;
        age = b;
    }

    //Member function has to be declared inside class, prior to, defining it outside the class
    void age_after_n_years(int n);

    void display_data()
    {
        cout << "Person " << name << " is of age " << age;
    }
};

//1. Member function defined outside class, using scope resolution operator -> ::
//2. Member function defined outside class, using membership label -> Classname::
//3. Following definition results in an error, had it not declared inside class Classname
void Person::age_after_n_years(int n)
{
    cout << "\nPerson " << name << " will be " << age + n << " years old, after " << n << " years.";
}

int main()
{
    Person p1; //p1 variable is an object of Person datatype
    //p1.age = 10; // inaccessible, since class members(func or var) are by default private
    p1.set_data("Ram", 12);
    p1.display_data(); //noun.verb()
    p1.age_after_n_years(4);
    return 0;
}