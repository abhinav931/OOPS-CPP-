#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;

    fout.open("learnings1.txt", ios::out);

    //in text mode, if a file is opened, special characters will show the affect

    fout<<"Hey, love this world.\n Everyone is one :)";

    fout.close();

    cout<<"Data written to the file in text mode.\n";

    ofstream fout1;

    fout1.open("learnings2.txt", ios::binary);

    fout1<<"Hey, love this world.\n Everyone is one \t :)";

    fout1.close();

    cout<<"Data written to the file in binary mode.\n";
}