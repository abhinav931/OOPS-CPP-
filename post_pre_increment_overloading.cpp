#include <iostream>
using namespace std;

class Number
{
    int num;

public:
    Number()
    {
        num = 2;
    }
    void display()
    {
        cout << endl
             << num;
    }

    Number operator++() //pre increment
    {
        Number n;
        n.num = ++num;
        return n;
    }

    Number operator++(int) //post increment, int is to distinguish between post increment and pre increment operator.
    {
        Number n;
        n.num = num++;
        return n;
    }
};

int main()
{
    cout << "\nPre increment";
    Number n1;
    n1.display();
    //Number n2 = ++n1; //pre increment
    //OR
    Number n2 = n1.operator++();
    n2.display();

    cout << "\n Post increment";
    Number n3;
    n3.display();
    // Number n4 = n3++;
    //OR
    Number n4 = n3.operator++(1);
    n3.display();
    n4.display();
}