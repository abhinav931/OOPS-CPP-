#include <iostream>

using namespace std;

void func()
{
    static int var_1;      //var_1 is static variable, by default initialized to 0
    cout << var_1 << endl; //output -> 0 to 9, because , var_1 only gets memory at the start of program execution and destroys at the end of program execution
    var_1++;
    int var_2 = 2; //var_2, had it not initialized to 2, it must be having some garbage value
    var_2++;
    cout << var_2 << endl; //output 3, always, because var_2 gets memory and destroys for every function call
}
int main()
{
    int i = 0;
    for (i = 0; i < 10; i++)
        func();
}