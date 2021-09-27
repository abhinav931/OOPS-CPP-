#include <iostream>

using namespace std;

inline void greetings();

//inline functions --> used if you want to context switches time of functions

int main()
{
    greetings(); //will be replaced by greetings definition, if compiler founds definition small in size.
}

void greetings()
{
    cout << "Hey there, i am greetings function";
}