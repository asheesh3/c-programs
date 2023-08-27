#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(void); // constructor declaration
    complex(int x, int y);
    void print( )
    {
        cout <<  a << "  " << b;
    }
};

complex ::complex(void)
{
    a = 1;
    b = 2;
}

complex::complex(int x, int y)  //--------------> takes parameters
{
    a = x;
    b = y;

    cout<<endl<<"constructor loaded"<<endl;
     
     

}

int main()
{
 
    complex c(23, 34); // implicit call
    c.print();

    // explicit call
    complex  a = complex(5,7);
    a.print();

    return 0;
}