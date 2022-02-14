#include<iostream>
#include<fstream>

// the useful classes for working with files in cpp are:
// 1. fstream
// 2. ifstream -- derived from fstreambase
// 3. ofstream -- derived from fstreambase

// IN order to work woth files in cpp , you wil have to open it, there are two ays to open a fileno
// 1. using constructor
// 2. using member function open() of the class


using namespace std;

int main(){
    string st = "Dwarikanath";
    string st2;
    // //opening file using constructor and writing it
    // ofstream out("files.txt");  //write operation
    // out<<st;

    // //opening file using constructor and reading it
    ifstream in("samplefile.txt");
    getline(in, st2);
    cout<<st2;
    return 0;
}