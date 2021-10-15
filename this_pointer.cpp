#include <iostream>
using namespace std;

class A
{
private:
    int a;

public:
    void set_data(int a)
    {
        //a = a; //name conflict between IMV "a" and argument variable "a"
        //compiler finds it difficult to distinguish IMV and Argument, if having same name
        //this pointer resolves the problem

        this->a = a;
    }

    void show_data()
    {
        cout << "a = " << a;
    }
};

int main()
{
    A a1;
    a1.set_data(12);
    a1.show_data();
}