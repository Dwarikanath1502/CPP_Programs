#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float intrestRate;
    float returnValue;

public:
    BankDeposit(){};
    BankDeposit(int p, int y, float r); // r can be like 0.04
    BankDeposit(int p, int y, int r);   // r can be like 15

    void show(void);
};

BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    intrestRate = r;

    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + r);
    }
}

BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    intrestRate = float(r) / 100;

    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + intrestRate);
    }
}

void BankDeposit ::show()
{
    cout << endl
         << "Principal amount was " << principal << endl
         << "Return value after" << years
         << " years is " << returnValue << endl;
}
int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    bd3.show();

    cout << "Enter the value of p y and r" << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();
    
    cout << "Enter the value of p y and R" << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    
    return 0;
}