// making the functin friend of other class

#include <iostream>
using namespace std;

// forwared declaration

class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int sumComplex(complex, complex);
    int sumiComplex(complex, complex);
};

class complex
{
    int a, b;
    // declaring the individual function as friend
    // friend int calculator ::sumComplex(complex, complex);
    // friend int calculator ::sumiComplex(complex, complex);

    //   declaring the whole class as a friend
    friend class calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumiComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setNumber(1, 2);
    o2.setNumber(21, 4);
    calculator c1;
    int res = c1.sumComplex(o1, o2);

    cout << endl
         << res;

    int resi = c1.sumiComplex(o1, o2);

    cout << endl
         << resi;

    return 0;
}