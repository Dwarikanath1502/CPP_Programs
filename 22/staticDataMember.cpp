#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;
    // count is static data member of class employee
public:
    void setData(void)
    {
        cout << "Enter id: " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The Id of this employee is : " << id << " and this is employee number " << count << endl;
    }
    static void getCount(void)
    {
        // cout<<id;   //throw error cause it's not static var
        cout << "The value of count is : " << count << endl;
    } // static function has only access to static vars or other static funcs not to others
};

int Employee ::count; // default value of static var is 0

int main()
{
    Employee dn, sam, rohan;
    // dn.id; can't acces as id is private

    dn.setData();
    Employee::getCount();
    dn.getData();

    sam.setData();
    Employee::getCount();

    sam.getData();

    rohan.setData();
    Employee::getCount();

    rohan.getData();

    return 0;
}