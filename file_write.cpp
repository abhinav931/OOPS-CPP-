#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

//Writing data to a file
int main()
{
    char *data_to_write;
    data_to_write = "Hey, I am learning CPP. Will definitely learn it";

    //Step 1 - make object of ofstream class
    ofstream fout;

    //Step 2 - open the file blah blah blah
    //Copy of file comes from Hard disk to RAM
    cout << "File arrives into RAM from HD";
    fout.open("learnings.txt"); //if not exists, new file created
    getch();

    //Now, program and file both are in RAM, the output stream between these two is represented by fout object

    //Step 3 - writing data to file(in RAM) using fout object
    //fout object calls insertion operator which is defined in ostream class, to write data to the file
    cout << "\nData is written to file in RAM";
    fout << data_to_write;
    getch();

    //Data is now written to the file, but , the file is still in RAM
    //To transfer this file to HD, where its original version is existing
    //you need to call close() function
    cout << "\nFile in RAM is now transferred to HD";
    fout.close();
    getch();

    cout << "\nYeah, data become persistent.";
}
