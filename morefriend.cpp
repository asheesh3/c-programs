#include <iostream>
using namespace std;

class y;

class x
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(x, y);
};

class y
{
    int data;

public:
    void setVal(int value)
    {
        data = value;
    }
    friend void add(x, y);
};
void add(x o1, y o2)
{
    cout << "summing data of x and y" << o1.data + o2.data;
}
int main()
{
    x a;
    y b;
    a.setValue(5);
    b.setVal(23);
    add(a, b);

    return 0;
}