#include <iostream>

using namespace std;

struct person
{
    int age;
    char name[100];
};

//function prototype
person take_input();
void display_output(person);

int main()
{
    person b1 = take_input();
    display_output(b1); //passing structure to a function
}

//function returning structure
person take_input()
{
    person b;
    cout << "Enter age and name:- ";
    cin >> b.age >> b.name;
    return b;
}

//function accepting structure as an argument
void display_output(person b)
{
    cout << "Person age is:- " << b.age;
    cout << "\n Person name is:- " << b.name;
}