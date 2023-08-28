#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    float years;
    float interestRate;
    float returnValue;

public:
    BankDeposit()
    {
    }
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show()
    {
        cout << endl;
        cout << "principal amount was " << principal << endl
             << "return value after " << years << " is   " << returnValue << endl;
    }
};

BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
    show();
}
BankDeposit::BankDeposit(int p, int y, int r)
{

    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
    show();
}

int main()
{
    BankDeposit  
      bd2(23, 45, 2);



    return 0;
}