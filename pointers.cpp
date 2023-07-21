#include <iostream>
using namespace std;


// typedef struct employee
// {
//     int eId;
//     char Favhar;
//     float salary;

// }ep;
  union employee
{
    int rice;
    char Favhar;
    float salary;

};



int main()
{

//     ep asheesh;
   
//    asheesh.eId=2;
//    asheesh.salary=1000000;
//    asheesh.Favhar='c';

    // union  employee m1;
    // m1.rice=23;
    // // m1.salary=1223;
    // cout<<m1.rice;
    // it will only store the one value if you initilaze more than garbage value will be stored


enum meal {breakfast,lunch,dinner};
cout<<breakfast;
cout<<lunch;

meal m1 = breakfast;
cout<<m1;


   









    //     int a=3;
    //     int *b = &a;
    //     // & --> (adress of )  operator
    //     cout <<b;
    //     cout<<"\n"<<&a;

    //     // * --> dereference operator
    //     cout<<endl<<*b;
    // /*

    //  b will store the adress of the a and *b will be used to output of refrecence

    // */

    // // pointer to pointer
    // int **c=&b;
    // cout<<"c";
    // cout <<endl<<&b;
    // cout <<endl<<c;
    // cout <<endl<<*c;
    // cout <<endl<<**c;

//     int marks[4] = {
//         23, 43, 23, 4};
//     // for (int i=0;i<4;i++){
//     // }
//     // int i = 0;
//     // while (i < 4)
//     // {

//     //     cout << marks[i] << "\t";
//     //     i++;
//     //     cout<<"\t";
//     // }

//     // pointer and arrays
//     int *p =marks ;
//     // cout<<"the value of marks[0] is "<<*p<<endl;
//     // cout<<"the value of marks[0] is "<<*(p+1)<<endl;
//     // cout<<"the value of marks[0] is "<<*(p+2)<<endl;
//     // cout<<"the value of marks[0] is "<<*(p+3)<<endl;


// cout<<*(p++)<<endl;
// cout<<*(++p);







    return 0;
}