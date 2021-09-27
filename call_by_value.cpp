#include <iostream>
using namespace std;

int sum(int, int); //function declaration

int main()
{
    int num1 = 4, num2 = 5;
    cout << &num1 << " " << &num2 << endl;
    cout << "Sum of above two numbers is:- " << sum(4, 5) << endl;
    cout << num1 << " " << num2; //not changed, since func defintion does not have reference of both vars.
}

//function definition
int sum(int x, int y)
{
    cout << &x << " " << &y << endl; //will print different address than num1 and num2
    x++;
    y++;
    return x + y;
}