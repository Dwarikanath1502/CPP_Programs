#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout<<"Enter Value of num1:  \n";        /*<< This is insertion operator*/
    cin>>num1;   //>> is extraction operator
    cout<<"Enter Value of num2:  \n";        
    cin>>num2;

    cout<<"The sum is "<<num1+num2;
    return 0;
}
