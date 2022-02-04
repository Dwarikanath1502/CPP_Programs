#include<iostream>
using namespace std;

int count = 0;
//Destructor never takes a value nor return any value
class Num{
    public:
    Num(){              //constructor
        count++;
        cout<<"This is a time when construcot is called for object number"<<count<<endl;
    }
    ~Num(){         //Destructor(it starts with a tilde (~) sign)
        cout<<"This is the time when my destructor is call for object number"<<count<<endl;
        count--;
    }
};

int main(){
    cout<<"We are inside our main functio"<<endl;
    cout<<"Creatig first object n1"<<endl;
    Num n1;
    {
        cout<<"Entering this block..."<<endl;
        cout<<"cretin two more objects"<<endl;
        Num n2, n3;
        cout<<"Exiting this block..."<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}