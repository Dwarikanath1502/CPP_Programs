// #include <iostream>
// using namespace std;

// class Employee
// {
//     int a, b, c;

// public:
//     void setData(int a1, int b1, int c1);
//     void getData()
//     {
//         cout << "A :" << a << endl;
//         cout << "B :" << b << endl;
//         cout << "C :" << c << endl;
//     }
// };

// void Employee ::setData(int a1, int b1, int c1)
// {
//     a = a1;
//     b = b1;
//     c = c1;
// }

// int main()
// {
//     Employee dn;
//     dn.setData(12, 13, 14);
//     dn.getData();

//     return 0;
// }


#include<iostream>
using namespace std;

class Student{

public:
    int a;
    string name;

};

int main(){
    Student s1;
    s1.a = 10;
    s1.name = "Dwarikanath";

    cout<<"A: "<<s1.a<<endl;
    cout<<"B: "<<s1.name<<endl;
    return 0;
}