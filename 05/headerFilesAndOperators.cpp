//There are two tyoes of header files 
//1.System header Files comes with compiler
#include<iostream>
//2. user defined written by coder
// #include<this.h> this will produce error because it is not present in current directory
using namespace std;

int main()
{
    int a = 4, b = 5;
    cout<<"Operators in CPP..."<<endl;
    cout<<"Following are the tyoes of Operators in CPP..."<<endl;
    //Arithmatic operator
    cout<<"Value of A:"<<a<<endl;
    cout<<"Value of B:"<<b<<endl;
    cout<<"The value of A+B:"<<a+b<<endl;
    cout<<"The value of A-B:"<<a-b<<endl;
    cout<<"The value of A*B:"<<a*b<<endl;
    cout<<"The value of A/B:"<<a/b<<endl;
    cout<<"The value of A%B:"<<a%b<<endl;
    cout<<"The value of a++:"<<a++<<endl;
    cout<<"The value of a-- :"<<a--<<endl;
    cout<<"The value of ++a:"<<++a<<endl;
    cout<<"The value of --a:"<<--a<<endl;
    cout<<endl;
    //Assignment operator //used to assign values
    // int a = 3;
    // char d = 'd';

    //comparison opertor
    cout<<"Following are the comparison Operators in CPP..."<<endl;
    cout<<"The value of a==b: "<<(a==b )<<endl;
    cout<<"The value of a!=b: "<<(a!=b) <<endl;
    cout<<"The value of a>b: "<<(a>b) <<endl;
    cout<<"The value of a<b: "<<(a<b) <<endl;
    cout<<"The value of a>=b: "<<(a>=b) <<endl;
    cout<<"The value of a<=b: "<<(a<=b) <<endl;
    cout<<endl;

    //Logical operator
    cout<<"Following are the Logical Operators in CPP..."<<endl;
    cout<<"The value of logical and operator (a==b ) && (a<b) is: "<<((a==b ) && (a<b))<<endl;
    cout<<"The value of logical or operator (a||b ) || (a<b) is: "<<((a==b ) || (a<b))<<endl;
    cout<<"The value of logical not operator (a||b ) || (a<b) is: "<<(!(a==b ))<<endl;
    cout<<endl;

    //





    return 0;
}
