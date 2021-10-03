#include <iostream>

using namespace std;

class Number
{
    int x;

public:
    Number()
    {
        x = 2;
    }

    //unary operator - is overloaded
    Number operator-()
    {
        Number temp;
        temp.x = -x;
        return temp;
    }

    void display()
    {
        cout << x;
    }
};

int main()
{
    Number n1, n2;
    n1.display();
    cout << "\nafter negating...\n";
    // n2 = -n1;
    n2 = n1.operator-(); //same as above
    n2.display();
}