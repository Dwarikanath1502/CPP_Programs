#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;

};

/*for a protectes member 
                        |   public derivation      private derivation         protected derivation

1. public members       |   public                  private                     protected
2. private members      |   Not inherited           Not inherited               Not inherited
3. protected members    |   protected               private                     protected

*/

class Derived : protected Base
{

};

int main()
{
    Base b;
    Derived d;
    // cout<<d.a;       //will not work since a is protected in both base as well as in derived class
    return 0;
}