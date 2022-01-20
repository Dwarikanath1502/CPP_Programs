//sequence structure
//selection structure
//loop structure

#include<iostream>

using namespace std;

int main(){
    // cout<<"This is program 9";
    int age;
    cout<<"Tell me your age:";
    cin>>age;

    //selection control structure if-else
    // if (age<18 && (age>0))
    // {
    //     cout<<"You can'tcome to my party!"<<endl;
    // }else if(age == 18){
    //     cout<<"You are a kid and will get kid pass party!"<<endl;

    // }else if(age<1){
    //     cout<<"You are not yet born!"<<endl;
    // }
    // else{
    //     cout<<"You can come to the party!"<<endl;
    // }

    //selection control structure switch case
    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 22:
        cout<<"You are 22"<<endl;
        break;
    case 2:
        cout<<"You are 2"<<endl;
        break;
    default:
        cout<<"No special cases"<<endl;
        break;
    }
    

    return 0;
}