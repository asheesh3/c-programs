#include <iostream>
using namespace std;



class complex {
    int a, b;

public:
    complex(void); // constructor declaration
    void print(){
        cout<<a<<"  "<<b;

    }

};

complex ::complex(void)
{
    a = 1;
    b = 2;
    

}
int main()
{

    complex c;
    c.print();

    return 0;
}

/*


1 constructor is the special member function which have the same name as class
2 it is used to initilizte the value
3 it is automatically invoked when an object is created
4 constructor have no return type
5 constructor is always decalred in public section in the class
6 default constructor is that who does not accept the value
7 parameterise constructor is someone who does not accept values
8 they do not have the return type and does not return any value
9 they can have the default arguments
10 we cannot refer to the address



*/