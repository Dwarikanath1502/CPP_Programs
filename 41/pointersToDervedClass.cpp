// run time  polymorphism
// pointres to derived class
#include <iostream>
using namespace std;

class BaseClass
{
    public:
    int var_base;
    void display(void){
        cout<<"Displaying Base class variable var 1: "<<var_base<<endl;
    }
};

class DerivedClass : public BaseClass
{
    public:
    int var_derived;
    void display(void){
        cout<<"Displaying Base class variable var 1: "<<var_base<<endl;
        cout<<"Displaying Derived class variable var 1: "<<var_derived<<endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass objBase;
    DerivedClass objDerived;
    base_class_pointer = &objDerived;   //pointing base class pointer to derived class

    // base_class_pointer->var_derived = 34;    it will throw error

    base_class_pointer->var_base = 34;
    base_class_pointer->display();

    base_class_pointer->var_base = 3400;
    base_class_pointer->display();

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &objDerived;
    derived_class_pointer-> var_derived = 15;
    derived_class_pointer->display();

    return 0;
}