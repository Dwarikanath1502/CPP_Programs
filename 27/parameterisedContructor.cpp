

/*-------------------------parameterised constructor Example 1----------------------------------------*/

// #include <iostream>
// using namespace std;

// class Complex
// {
//     int a, b;

// public:
//     Complex(int, int); // constructor declaration

//     void printNumber(void)
//     {
//         cout << "The value of A : " << a << " and B :" << b << "i " << endl;
//     }
// };

// Complex::Complex(int x, int y) // this is parameterised constructor as it accepts two parameters
// {
//     a = x;
//     b = y;
// }

// int main()
// {
//     // implicit call
//     Complex a(4, 6);
//     a.printNumber();

//     // Explicit call
//     Complex b = Complex(12, 15);
//     b.printNumber();
//     return 0;
// }

/*-------------------------parameterised constructor Example 1----------------------------------------*/

#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
        z  = x * y;
    }
    void dislplayPoint(void)
    {
        cout << "The point is (" << x << " , " << y <<")"<< endl;
    }
};

int main()
{
    Point p(1,1);
    p.dislplayPoint();
    Point q (4,6);
    q.dislplayPoint();
    return 0;
}