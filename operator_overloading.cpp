#include <iostream>

using namespace std;

class Complex
{
    int real, imaginary;

public:
    //parametrized constructor to initialize the object's IMV.
    Complex(int re, int imag)
    {
        real = re;
        imaginary = imag;
    }

    //default constructor
    Complex()
    {
        real = 0;
        imaginary = 0;
    }

    //+ operator is overloaded with a job to perform complex number addition
    Complex operator+(Complex c1)
    {
        Complex temp;
        temp.real = real + c1.real;
        temp.imaginary = imaginary + c1.imaginary;
        return (temp);
    }

    //IMF
    void display()
    {
        cout << real << "+" << imaginary << "i" << endl;
    }
};

int main()
{
    Complex c1(12, 24), c2(1, 2), result;
    result.display();
    c1.display();
    c2.display();
    // result = c1.operator+(c2);
    //OR
    result = c1 + c2; // function whose name is operator, needn't be called using dot operator.
    result.display();
}