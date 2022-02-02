#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    { // constructor overloading
        a = x;
        b = 0;
    }
    Complex()           //without argument
    {
        a = 0;
        b = 0;
    }
    void printNumber(void)
    {
        cout << "Your number is A: " << a << " and B :" << b << endl;
    }
};

int main()
{
    Complex c1(4, 6);
    c1.printNumber();

    Complex c2(15);
    c2.printNumber();

    Complex c3(07, 15);
    c3.printNumber();

    Complex c4;         //without argument
    c4.printNumber();
    return 0;
}