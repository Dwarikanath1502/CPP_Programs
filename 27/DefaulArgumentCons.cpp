#include<iostream>
using namespace std;

class Simple{
    int data1;
    int data2;
    int data3;
    public:
    Simple(int a, int b = 9, int c = 15){
        data1 = a;
        data2 = b; 
        data3 = c; 
    }
    void printData(void);
};

void Simple:: printData(){
        cout<<"The value of Data 1: "<<data1<< " , Data 2 :"<<data2<<" and Data 3: "<<data3<<endl;
    }

int main(){
    Simple s(1, 2);
    s.printData();
    return 0;
}