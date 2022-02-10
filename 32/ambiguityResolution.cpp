#include <iostream>
using namespace std;

// BAse class 1
class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

// base class 2
class Base2
{
public:
    void greet()
    {
        cout << "How's it's going?" << endl;
    }
};

// derived class

class Derived : public Base1, public Base2
{
    // int a;
public:
    void greet()
    {
        // cout<<endl;
        Base2::greet();
    }
};

class B
{
    int a;

public:
    void say()
    {
        cout << "Hello world" << endl;
    }
};

// it will override B, and if has no func the it will derive B
class D : public B
{
public:
    void say()
    {
        cout << "Hello world by Dwarikanath" << endl;
    }
};

int main()
{
    // ambiguity1
    //  Base1 base1obj;
    //  Base2 base2obj;
    //  base1obj.greet();
    //  base2obj.greet();

    // Derived d;
    // d.greet();

    // ambiguity2

    B b;
    b.say();

    D d;
    d.say();
    return 0;
}