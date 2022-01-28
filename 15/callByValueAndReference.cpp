#include<iostream>
using namespace std;

int sum(int a , int b){
    int c = a+b;
    return c;
}

//this will not swap a and b
void swap(int a , int b){
    int temp = a;
    a = b;
    b = temp;
}

//call by reference using pointers
void swapPointer(int *a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//call by reference using using cpp reference variables
void swapReaferenceVar(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
    // return a;
}

int main(){
    int a = 4, b = 5;
    // cout<<"The sum if 4 and 5 is: "<<sum(a,b)<<endl;
    cout<<"The value of a is: "<<a<<" and value of B is : "<<b<<endl;
    // swap(a,b);
    // swapPointer(&a,&b); //this will swap a and b using pointers
     swapReaferenceVar(a,b); //this will swap a and b using reference variable
    cout<<"The value of a is: "<<a<<" and value of B is : "<<b<<endl;
    // swapReaferenceVar(a,b) = 766;
    // cout<<"The value of a is: "<<a<<" and value of B is : "<<b<<endl;

    return 0;
}