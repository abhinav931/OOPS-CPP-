#include <iostream>

using namespace std;

int main()
{
    int num = 5;
    int &num_ref = num; //reference variable defined and declared same time, with reference of num variable
    num_ref++;
    cout << num_ref << endl;
    cout << num << endl;

    //getting the addresses of both vars.
    cout << &num << endl;
    cout << &num_ref;
}