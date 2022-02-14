#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string s = "Dwarikanath";
    // it create a file and write to a file
    // ofstream out("sample.txt");
    // out<<s;

    //reading from file
    ifstream in("sample.txt");
    // in>>s;
    getline(in, s);
    cout<<s<<endl;
    in.close();
    return 0;
}