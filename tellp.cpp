#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

//Writing data to a file
int main()
{
    ofstream fout;
    fout.open("learnings2.txt"); //if not exists, new file created

    //tellp() is an IMF of ostream class, tellp points to the characters in output stream of file.

    cout<<fout.tellp();
    return 0;
}
