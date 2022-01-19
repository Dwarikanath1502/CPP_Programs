//Constat, manipulator and operator precedence

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    // int a = 34;
    // cout<<"The value of A was "<<a<<endl;
    // a = 45;
    // cout<<"The value of A is "<<a<<endl;

    //constants in cpp
    // const int a = 3;
    // cout<<"The value of A was "<<a<<endl;
    // a = 45; you will get error because it is constant
    // cout<<"The value of A is "<<a<<endl;

    //***********************Manipulators***********************
    //Manipulators - Helps in formatting data display like <<endl.
     
    // int a = 3, b = 78, c = 5344;
    // cout<<"The value of A without setw is "<<a<<endl; 
    // cout<<"The value of B without setw is "<<b<<endl;
    // cout<<"The value of C without setw is "<<c<<endl<<endl;
 
    // cout<<"The value of A is "<<setw(4)<<a<<endl;
    // cout<<"The value of B is "<<setw(4)<<b<<endl;
    // cout<<"The value of C is "<<setw(4)<<c<<endl;

    //***********************operator precedence***********************
    int a = 3, b = 4;
    // int c = (a*5)+b;
    int c = (((a*5)+b)-45)+87;
    cout<<c<<endl;

    return 0;
}