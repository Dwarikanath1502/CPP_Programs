#include <iostream>
using namespace std;

// base class
class Employee
{
private:
public:
    float salary;
    int id;

    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee(){}
};

// derived class
class Programmer : Employee
{
public:
    Programmer(int inpid)
    {
        id = inpid;
    }
    int languageCode = 9;
    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee dn(1), rohan(2);
    cout << dn.salary << endl;
    cout << rohan.salary << endl;
    Programmer sam(10);
    cout<<sam.languageCode<<endl;
    sam.getData();
    return 0;
}