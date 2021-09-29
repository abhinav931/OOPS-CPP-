#include <iostream>

using namespace std;

inline void greetings();

//inline functions --> used if you want to reduce context switches time of functions
//inline functions are only useful when function size is smaller.
//if function size is bigger, then, compiler won't replace function call with function definition

int main()
{
    greetings(); //will be replaced by greetings definition, if compiler founds definition small in size.
}

void greetings()
{
    cout << "Hey there, i am greetings function";
}
