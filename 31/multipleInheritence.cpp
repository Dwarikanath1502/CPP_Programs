#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1int;

public:
    void setBase1Int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void setBase2Int(int a)
    {
        base2int = a;
    }
};

class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The value of Base1 is : " << base1int << endl;
        cout << "The value of Base2 is : " << base2int << endl;
        cout << "The sum of Base1 and Base2 is : " << base1int + base2int << endl;
    }
};

int main()
{
    Derived dn;
    dn.setBase1Int(15);
    dn.setBase2Int(15);
    dn.show();
    return 0;
}