#include <iostream>
using namespace std;

//Base class 1
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

//Base class 2
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

//Base class 3
class Base3
{
protected:
    int base3int;
 
public:
    void setBase3Int(int a)
    {
        base3int = a;
    }
};

//derived class
class Derived : public Base1, public Base2, public Base3
{
public:
    void show()
    {
        cout << "The value of Base1 is : " << base1int << endl;
        cout << "The value of Base2 is : " << base2int << endl;
        cout << "The value of Base3 is : " << base3int << endl;
        cout << "The sum of Base1 and Base2 is : " << base1int + base2int + base3int << endl;
    }
};


//main class
int main()
{
    Derived dn;
    dn.setBase1Int(15);
    dn.setBase2Int(15);
    dn.setBase3Int(15);
    dn.show();
    return 0;
}