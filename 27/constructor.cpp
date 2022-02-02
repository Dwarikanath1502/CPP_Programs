// constructor program
#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // creating a constructor
    Complex(void); // constructor declaration
    void printNumber(void)
    {
        cout << "Your number is a :" << a << " B :" << b << endl;
    }
};

Complex::Complex(void)  //this is a default constructor as it don't accepts any parameter
{
    a = 0;
    b = 0;
    // cout<<"Anything inside constructor wil get printed..."<<endl;
}

int main()
{
    Complex c;
    c.printNumber();
    return 0;
}