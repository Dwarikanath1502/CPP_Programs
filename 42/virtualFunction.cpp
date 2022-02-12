#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base = 1;
    virtual void display(void)
    {
        cout << "Displaying Base class variable var 1: " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 2;
    void display(void)
    {
        cout << "Displaying Base class variable var 1: " << var_base << endl;
        cout << "Displaying Derived class variable var 1: " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass objBase;
    DerivedClass objDerived;
    base_class_pointer = &objDerived;
    base_class_pointer->display();
    return 0;
}