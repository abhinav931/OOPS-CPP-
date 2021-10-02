#include <iostream>

using namespace std;

class Account
{
private:
    int balance;    //Instance member variable
    static int roi; //instance member variable OR class variable, not a part of object

public:
    void set_data(int bal)
    {
        balance = bal;
    }
    void func()
    {
        cout << roi << endl;
        roi++;
        cout << balance << endl;
        balance++;
    }
};

int Account::roi; //at this point, SMV roi gets memory,otherwise it will remain undefined
//by default SMV roi is initialized to 0

int main()
{
    Account acc;
    acc.set_data(12);
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        acc.func();
    }
}