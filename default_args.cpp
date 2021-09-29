#include <iostream>

using namespace std;

//default arguments should be at the end of arg list, since, only that way compiler can map the variables, call --> definition
int sum(int, int, int = 0);

int main()
{
    int a = 2, b = 3;
    cout << sum(2, 3);
}

int sum(int a, int b, int c)
{
    cout << c << endl; //c=0, eventhough not passed in func call, since we already set default value of c in func declaration.

    return a + b + c;
}
