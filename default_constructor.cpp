#include <iostream>
using namespace std;

class Toy
{
    char *name;

public:
    Toy(char *n) //Parameterized constructor
    {
        name = n;
    }

    //necessary to be implemented, because, we have object declaration with zero arguments
    Toy() //default constructor - zero arguments, empty body
    {
    }
};

int main()
{
    Toy t1; //ERROR - no default constructor exists, if not explicitly made
    //since, we defined constructor already, therefore default constructor is not made by compiler
    //in such case, if we have object declaration with zero arguments, we need to make default constructor explicitly.
}