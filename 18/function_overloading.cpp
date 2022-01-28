//function overloading

#include<iostream>
using namespace std;

int add(int a, int b){
    cout<<"using function with two argument"<<endl;
    return a+b;
}

int add(int a, int b, int c){
    cout<<"using function with three argument"<<endl;
    return a+b+c;
}

//calculate the volume of cylinder
int volume(double r, int h){
    return(3.14 * r *r  *h);
}

//calculate volume of cube
int volume(int a){
    return a*a*a;
}

//calculate vol of rectangle
int volume(int l, int b, int h){
    return (l*b*h);
}

int main(){
    cout<<"The sum of 3 and 6 is: "<<add(3,6)<<endl;
    cout<<"The sum of 3 , 7 and 6 is: "<<add(3,7,6)<<endl<<endl;

    cout<<"The volume of cuboid of 3, 7, 6 is: "<<volume(3,7,6)<<endl;
    cout<<"The volume of cylinder of radius 3 and height 6 is: "<<volume(3,6)<<endl;
    cout<<"The volume of cube of side 3 is: "<<volume(3)<<endl;


    return 0;
}