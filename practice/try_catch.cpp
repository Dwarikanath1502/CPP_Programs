#include <iostream>
using namespace std;

int division(int x, int y)
{
    if (y==0)
    {
        cout<<"Tring division by zero..."<<endl;
    }
    
    return (x / y);
}

int main()
{
    int i = 50;
    int j = 0;
    int k = 0;
    try
    {
        k = division(i, j);
        cout << k << endl;
    }
    catch (const char* e)
    {
        cerr << e;
    }

    return 0;
}