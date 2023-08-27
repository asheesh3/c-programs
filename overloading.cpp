#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
        print();
    }

    complex(int x){
        a=x;
        b=0;
        print();
    }

    void print()
    {
        cout << a << " " << b<<endl;
    }
};

int main()
{

    complex c1(4, 2);
    complex c2(4);

    return 0;
}