#include<iostream>
using namespace std;

inline int product(int a , int b){
    return a*b;
} 

float moneyReceive(int currentMoney, float factor = 1.04){
    return currentMoney * factor;
}

int main(){
    int a,b ;
    int money = 100000;
    cout<<"Enter a and b: "<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    cout<<"If you have " <<money<< " rupees in your account you will receive: "<<moneyReceive(money)<<" after 1 year"<<endl;
    cout<<"or VIP : If you have " <<money<< " rupees in your account you will receive: "<<moneyReceive(money, 1.10)<<" after 1 year"<<endl;
    return 0;
}