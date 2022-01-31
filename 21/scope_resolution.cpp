
// case 1 - to use global variable at local space
// #include<iostream>
// using namespace std;

// int var = 100;

// int main(){
//     int var  = 50;
//     cout<<"This is local var: "<<var<<endl;
//     cout<<"This is global var: "<<::var<<endl;
//     return 0;
// }

//case -2 Program to define the member function outside of the class using the scope resolution (::) operator

#include<iostream>
using namespace std;

class Operate{
    public:
    void fun(void);
};

void Operate :: fun(){
    cout<<"This is another case to use scope resolution operator..."<<endl;
}

int main(){
    Operate op;
    op.fun();
    return 0;
}