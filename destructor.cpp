#include <iostream>

using namespace std;

class Number
{
    int a;

public:
    ~Number()
    {
        cout << "\nDestructor have coding to destroy resources allocated to object";
        cout << "\nMisconception:- destructor destroys object";
        cout << "\nDestructor is called automatically called BEFORE object is destroyed.";
        cout << "\n Destructor is always an instance member function. Never, SMF.";
    }

    // static ~Member(){} // Destructor can't be static member function
};

void func()
{
    cout << "\nI'll destroy object.";
    Number n1;
}
int main()
{
    func();
    cout << "\nYeah, object is destroyed.";
}