// pointers to objects and arrow operator

#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData(void)
    {
        cout << "The real part is : " << real << endl;
        cout << "The imaginary part is : " << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    Complex c1;
    // Complex *ptr = &c1;
    Complex * ptr = new Complex;
    // (*ptr).setData(10, 12); is exactly same as
    ptr->setData(10, 12);
    // (*ptr).getData(); is as same as
    ptr->getData();


    //Array  of objects
    Complex * ptr1 = new Complex[4];
    ptr1->setData(10, 12);
    ptr1->getData();
    return 0;
}