#include<iostream>
using namespace std;

// Funtion Prototype

// type function_name(arguments);
// int sum(int a , int b); --Aceptable
// int sum(int a ,  b); -- Not Aceptable
int sum(int  , int);   //--Acceptable
// void g(void);
void g();

int main(){
   int num1, num2;
   cout<<"Enter first number: "<<endl;
   cin>>num1;
   cout<<"Enter second number: "<<endl;
   cin>>num2;
   //num1 & num2 is acual parameter
   cout<<"sum is: "<<sum(num1, num2)<<endl;
   g();

    return 0;
} 

int sum(int a, int b){
    //Formal parameters a and b will be taking values from actual parameters num1 and num2
    int c = a + b;
    return c;
}


void g(){
    cout<<"Hello there,Dwarikanath here!"<<endl;
}