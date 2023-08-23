#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count; 
    //it is the static data member 
     //cannot be initialized here

public:
    void set_data(void)
    {
        cout << "enter the id" << endl;

        cin >> id;
        count++;
    }
    void get_data(void)
    {
        cout << "the id of the employee is " << id << "and the enmployee no is "
             << " " << count << endl;
    }

    static void get_count(void){
        cout << "the value of the count is "<<count <<endl;
        // cout<<id;  cannot use another member only static

    }
};

int employee::count; //can be initialze here

int main()
{

    employee Asheesh, ritik, anshul;
    Asheesh.set_data();
    Asheesh.get_data();

    employee::get_count();

    ritik.set_data();
    ritik.get_data();
    employee::get_count();

    anshul.set_data();
    anshul.get_data();
    employee::get_count();
    return 0;
}

// static variable is always written outside the class
// it is used to preserve the variable
// we are declaring outside because the memory comes with the class not with the object
// static vriable is always started from 0
// static variable is also known as class variable
// only make one copy which is accesible only from the class




// for static method

// it is used to access only static variable 
// it is used to run with the help of class not with object
