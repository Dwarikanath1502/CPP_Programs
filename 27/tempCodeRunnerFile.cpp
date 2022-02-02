#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int); // constructor declaration

    void printNumber(void)
    {
        cout << "The value of A : " << a << " and B :" << b << "i " << endl;
    }
};

Complex::Complex(int x, int y) // this is parameterised constructor
{
    a = x;
    b = y;
}

int main()
{
    // implicit call
    Complex a(4, 6);
    a.printNumber();

    // Explicit call
    Complex b = Complex(12, 15);
    b.printNumber();
    return 0;
}