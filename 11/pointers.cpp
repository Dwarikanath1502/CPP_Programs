#include<iostream>
using namespace std;

int main(){
    int a = 3;
    int *b = &a;
    
    cout<<"The address of a is: "<<&a<<endl; //adress of operator
    cout<<b<<endl;
    cout<<"The value at address at adress B is: "<<*b<<endl; //dereference operatorS

    int **c = &b;   //** stores the adress of pointer

    cout<<"The address of b is: "<<&b<<endl; 
    cout<<"The address of b is: "<<c<<endl; 
    cout<<"The value at address c is: "<<c<<endl; 
    cout<<"value at address (value_at(c)) is: "<<**c<<endl; 


    return 0; 
}