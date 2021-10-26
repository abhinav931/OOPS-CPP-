#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("learnings.txt");
    fout<<"Hey, i am learning OOPS. :)";

    cout <<fout.tellp()<<endl;

    //moving put pointer by 2 indexes from current position
    fout.seekp(-4, ios_base::cur);

    cout<<fout.tellp();
    
}