#include <iostream>
#include <string.h>
using namespace std;

struct Book
{
    int book_id;
    char name[100];
    float price;
};

int main()
{
    Book b1; //struct variable without struct keyword(optional in cpp, mandatory in c)

    //assigning value to b1 variable of Book datatype
    b1.book_id = 1;
    strcpy(b1.name, "C++ made easy");
    b1.price = 350.00;

    //printing the value of variables of structure
    cout << b1.book_id << endl;
    cout << b1.name << endl;
    cout << b1.price << endl;

    Book b2 = {2, "c++ is c with classes", 450.9}; //initialization while declaration

    //printing the value of variables of structure
    cout << b2.book_id << endl;
    cout << b2.name << endl;
    cout << b2.price;
}