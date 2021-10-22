#include <iostream>
using namespace std;

//Function template OR Generic function
template <class X>
X compare(X a, X b)
{
    if (a > b)
    {
        return (a);
    }
    else if (a == b)
    {
        return 1;
    }
    else
    {
        return (b);
    }
}

int main()
{
    cout << compare(2, 1); //At the time of early binding, compiler set X as int.
    cout << endl
         << compare(2.1, 3.2); //At the time of early binding, compiler set X as float OR double
}