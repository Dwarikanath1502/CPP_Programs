#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // ofstream out("file2.txt");
    // cout << "Enter your name : ";
    // string name = "Dwarikanath";
    // cin >> name;
    // out << "My name is : " << name << endl;
    // out.close();

    ifstream in("file2.txt");
    string content;
    in>>content;
    cout<<"The content of this file is:"<<content;
    return 0;
}