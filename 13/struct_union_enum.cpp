#include<iostream>

using namespace std;

typedef struct employee
{
    int eId;
    char favChar;
    float salary;
} ep;


union money
{
    int rice;
    char car;
    float pounds;
};

int main(){


    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<m1;
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;


    
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car<<endl;


    // ep dn; 
    // struct employee shubham;
    // struct employee sam;
    // struct employee adarsh;
    // dn.eId = 1;
    // dn.favChar = 'd';
    // dn.salary = 15000000.0;
    // cout<<"The value is: "<<dn.eId<<endl;
    // cout<<"The value is: "<<dn.favChar<<endl;
    // cout<<"The value is: "<<dn.salary<<endl;
    return 0;
}