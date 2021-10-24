#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    char ch;

    //ifstream object will be associated with input stream
    fin.open("learnings.txt");

    //with the help of fin object, character is read, char by char
    ch=fin.get();

    //eof(), returns 1 if end of file  is reached else 0
    while(!fin.eof())
    {
        cout<<ch;
        //fin>>ch; //>> "Extraction operator", treats space, newline and tab as space delimiter, therefore ignores these 3 characters
        ch=fin.get();
        //get(), is used to solve above problem
    }
    return 0;
}