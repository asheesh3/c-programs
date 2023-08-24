#include <iostream>
using namespace std;

class complex
{
    int a, b;

    friend complex sumcomplex(complex,complex);
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



    // friend function
    // means it is not the member function  of the main class it only can access the member function 
    // you cannot access this function from other methods of this class
    
};



// ----------properties-----------------------
// not in the scope of the class
//  since it is not in the scope of the class , it cannot be called from the object of that class
// can be involked without the help  any object
// usually contains object as the arguments 
// can be declared inside public or private section of the class
// it cannot access the member directly by their names and need object name . member_name 




complex sumcomplex(complex c1, complex c2)
    {
        complex o3;
        o3.setNumber((c1.a + c2.a), (c1.b + c2.b));
        return o3;
    }

int main()
{
    complex c1, c2, sum;
    c1.setNumber(23, 5);
    c1.printNumber();
    c2.setNumber(2, 15);
    c2.printNumber();

    sum = sumcomplex(c1, c2);
    sum.printNumber();

    return 0;
}