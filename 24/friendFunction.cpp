#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // declaration of friend func
    friend Complex sumComplex(Complex o1, Complex o2);

    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c2.setNumber(5, 8);

    c1.printNumber();
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}

/*properties of frien function

1. not in the scope of class
2. since it is not in the scope of class it can't be called form object of class. (c1.sumcomplex == Invalid)
3. can be involed wothout help of any object
4. usually contains the object  as argument 
5. can be declared inside ublic or private section of class.

*/