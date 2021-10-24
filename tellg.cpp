#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

//Writing data to a file
int main()
{
    ifstream fin;
    fin.open("learnings2.txt"); //if not exists, new file created
    char ch;
    fin>>ch;

    //tellg() is an IMF of istream class, tellg points to the characters in input stream of file.

    while(!fin.eof())
    {
        cout<<fin.tellg()<<" ";
        fin>>ch;
    }
}
