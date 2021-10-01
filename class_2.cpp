#include <iostream>

using namespace std;

//IMV - gets memory when object is created
//IMV and IMF - belong to an object

//State of an object - collection of values of IMVs of an object
//for eg :- state of c1 object is -> (2, 4)

struct Complex
{
    int real, imaginary; // Instance member variables

public:
    void set_data(int a, int b) // Instance member function
    {
        real = a;
        imaginary = b;
    }

    //function returning object
    Complex add(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }

    //function to display data
    void display()
    {
        cout << real << "+" << imaginary << "i";
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.set_data(2, 4);
    c2.set_data(5, 7);
    c3 = c1.add(c2); //function call by passing object
    c3.display();
    return 0;
}