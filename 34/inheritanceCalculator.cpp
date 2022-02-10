#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
    int a, b;

public:
    void getDataSimple()
    {
        cout << "Enter value of a: " << endl;
        cin >> a;
        cout << "Enter value of b: " << endl;
        cin >> b;
    }
    void performOperationsSimple()
    {
        cout << "The value of a+b is : " << a + b << endl;
        cout << "The value of a-b is : " << a - b << endl;
        cout << "The value of a*b is : " << a * b << endl;
        cout << "The value of a/b is : " << a / b << endl;
    }
};

class ScientificCalculator
{
    int a, b;

public:
    void getDataScientific()
    {
        cout << "Enter value of a: " << endl;
        cin >> a;
        cout << "Enter value of b: " << endl;
        cin >> b;
    }
    void performOperationsScientific()
    {
        cout << "The value of cos (a) is : " << cos(a) << endl;
        cout << "The value of sin(a) is : " << sin(a) << endl;
        cout << "The value of expo(a) is : " << exp(a) << endl;
        cout << "The value of tan(a) is : " << tan(a) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{

};

int main()
{
    // SimpleCalculator sc;
    // ScientificCalculator sc;
    // sc.getData();
    // sc.performOperationsScientific();

    HybridCalculator hc;
    hc.getDataScientific();
    hc.performOperationsScientific();
    hc.getDataSimple();
    hc.performOperationsSimple();

    return 0;
}