#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    { // works as defalut constructor when no val match it will run
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }
    //when no copy constructor is found, compiler will send default construcotr as copy constructor
    Number(Number &obj)
    {
        cout<<"Copy Constructor called..."<<endl;
        a = obj.a;
    }

    void display(void)
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(45), z2;

    x.display();
    y.display();
    z.display();

    // z1 should exactly resemble z
    Number z1(x);//copy construcot invoked
    z1.display();

    z2 = z; //copy construcotor not called
    z2.display();

    Number z3 = z; //copy construcotor will invoke (Object is created here)
    z3.display();
    return 0;
}