#include<iostream>

using namespace std;

int main(){
    //Array example
    int marks[] = {23, 45,67, 68};
    int mathMarks[4];
    mathMarks[0] = 78;  
    mathMarks[1] = 79;  
    mathMarks[2] = 754;  
    mathMarks[3] = 746;

    // cout<<"These are maths marks:"<<endl;
    // cout<<mathMarks[0]<<endl; 
    // cout<<mathMarks[1]<<endl; 
    // cout<<mathMarks[2]<<endl; 
    // cout<<mathMarks[3]<<endl;

    //you can change the value of an array
    // marks[2]=445;
    cout<<"These are marks:"<<endl; 
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    // }
    

    // int i = 0;
    // while (i<4)
    // {
    //    cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //    i++;
        
    // }
    
       

       //pointers and arrays

       //pointer arithmetic formula:
       //adress new = adree current + i* sizeOf(data_type)

       int *p = marks;
       cout<<*p++;
    //    cout<<"The value of *p marks[0] is "<<*p<<endl;
    //    cout<<"The value of *p+1 marks[1] is "<<*p++<<endl;
    //    cout<<"The value of *p+2 marks[2] is "<<*p++<<endl;
    //    cout<<"The value of *p+3 marks[3] is "<<*p++<<endl;




    return 0;
}