#include <iostream>

using namespace std;

struct Skill
{
private:
    char name[20];
    int rating_out_of_10;

public:
    void output()
    {
        cout << "Skill " << name << " has rating " << rating_out_of_10 << " out of 10";
    }

    void input()
    {
        cout << "Enter skill and rate it:- ";
        cin >> name >> rating_out_of_10;
    }
};

int main()
{
    Skill s1;
    //s1.rating_out_of_10 = 7; //ERROR - inaccessible, since private member
    s1.input();  //accessible outside struct body, since public members
    s1.output(); //accessible outside struct body, since public members
}