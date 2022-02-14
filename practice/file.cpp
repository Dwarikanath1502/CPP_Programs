#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string s = "Dwarikanath";
    // writing to a file
    // ofstream out("sample.txt");
    // out<<s;

    //reading from file
    ifstream in("sample.txt");
    in>>s;
    cout<<s<<endl;
    return 0;
}