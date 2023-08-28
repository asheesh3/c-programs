#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number() {
        a=0;
        display();
    }
    number(int num)
    {
        a = num;
        display();
    }

    //copy constructor
//  copy constructor involked 
    number(number &num)
    {
        a = num.a;
        cout<<"copy constructor"<<endl;

        display();
    }
    void display()
    {
        cout << "the number of the obj is " << a<<endl;
    }
};

int main()
{
    number x, y, z(56);
    //z1 should exactly resemble z or x or y then we pass them respectively
    number z1(z);

    return 0;
}


/*

1) there is always a defult copy constructor for every constructor ,compiler created it

2) if we create the another object and then if we later assign it to another variable then it will not involked;

3) but if we assign to another object at the time of initilaztion then copy constructor is called


*/