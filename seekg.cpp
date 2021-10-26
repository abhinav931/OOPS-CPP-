#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("learnings.txt");
    char ch;
    cout<<" "<<fin.tellg();
    ch = fin.get();
    cout<<" "<<fin.tellg();

    //if we want get pointer to point to some index, say 0

    fin.seekg(0);
    cout<<" "<<fin.tellg();

    cout<<endl;

    //if we want get pointer to move 5 indexes from beginning
    fin.seekg(5, ios_base::beg);
    cout<<" "<<(char)fin.get()<<" "<<fin.tellg()<<endl;

    //if we want get pointer to move 5 indexes from current position
    fin.seekg(5, ios_base::cur);
    cout<<" "<<(char)fin.get()<<" "<<fin.tellg()<<endl;

    //if we want get pointer to move backwards from end, by 5 indexes
    fin.seekg(-5, ios_base::end);
    cout<<" "<<(char)fin.get()<<" "<<fin.tellg()<<endl;
}