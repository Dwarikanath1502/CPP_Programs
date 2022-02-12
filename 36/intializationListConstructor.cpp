#include <iostream>
using namespace std;
/*
    to initializa class object we use initialisation list inside constructor

    Syntax for initilisation list in constructor:
    constructor(arg-list): initialisation section{
        assignment + other code;
    }
*/

class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(2 * j)
    // Test(int i, int j) : a(i), b(a + j)
    // Test(int i, int j) :  b( j), a(i + b) FIXME: this will create problem because A will be initilized first 
    Test(int i , int j)
    {
        a = i;
        b = j;
        cout << "Constructor Executed..." << endl;
        cout<<"Value of A is :"<<a<<endl;
        cout<<"Value of B is :"<<b<<endl;
    }
    
};

int main()
{
    Test t(4,6);
    return 0;
}