#include <iostream>
using namespace std;

int main()
{
    int a = 15;
    int *ptr = &a;
    cout << "The value of a is " << *(ptr) << endl; // this is called deferencing, it gives value that is stored at that address.

    // new operator
    int *p = new int(150); // dynamic initialisation of variable
    cout << "The value at addres p is " << *(p) << endl;

    int *arr = new int[3];
    arr[0] = 10;
    // arr[1] = 20;
    *(arr + 1) = 20;
    arr[2] = 30;
// delete[] arr;        --- it deletes dynamically allocated variables
    cout << "The value arr[0] is " << arr[0] << endl;
    cout << "The value arr[1] is " << arr[1] << endl;
    cout << "The value arr[2] is " << arr[2] << endl;
    

    //delete operator


    return 0;
}