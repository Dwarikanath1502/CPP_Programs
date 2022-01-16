#include<iostream>
using namespace std;

int glo = 6;
void sum(){
    int a;
    cout<<glo;
}
int main(){
    int glo = 9;
    glo = 78;
    // int a = 14;
    // int b = 15;
    int a = 14, b = 15;
    float pi=3.14;
    char c = 'u';
    bool isTrue = false;
    sum();
    cout<<glo <<isTrue;
    // cout<<"This is tutorial 4 and value of A: "<<a<< "\nThe value of B: "<<b;
    // cout<<"\nThe value of pi: "<<pi;
    // cout<<"\nThe value of pi: "<<pi;
    // cout<<"\nThe value of char: "<<c;

    return 0 ;
}