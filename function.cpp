#include<iostream>
using namespace std;


// function prototype

// type function-name (argument)

// int sum(int ,int );
// int sum(int a,int b);--acceptable
// int sum(int a  ,int b){

//     // Formal a and b are taking value from actual parameters ;
//     int c= a+b;
//     return c;

// }
// int sum(int a, b);--not accaptable

//for swapping the values


// call by value


// void swap(int a, int b){
//     int temp =a;
//     a=b;
//     b=temp;

// }


// call by refrence using pointers
// void swap(int *a, int* b){
//     int temp =*a;
//     *a=*b;
//     *b=temp;

// }



// it is pass by referense means that the variables will point toward the memory location of variable that is being passed

// void swap(int &a, int &b){
//     int temp =a;
//     a=b;
//     b=temp;

// }



// return by refrence 

// int & swap(int &a, int &b){
//    int temp =a;
//     a=b;
//     b=temp;
//     return a;

// }


// this will return a memory location





// note:
// after the function is excecuted then the valriables in the function will be destoryed
//we can also intiallize the variables in the funtion parameter list and it can be overloaded
// always take the necassary arguments first in above



// ------------------------inline function------------------


inline int product(int a,int b){
    return a*b;
}

// put the function all the calling place directly which will save time
//always use this for short funtion cause long funtion will take more memory long function will be replaced and will take more memory
//where we should not use them
//1. where recursion used
//2. where static variable used
//3. where default  arguments are used
//4. where constant arguments are used


int main(){

    // 250 and 43 are actual parameter
    // cout<<sum(250,43);


int a=3, b=2;

// cout<<"the value of a is "<<a<<" and the value of b is "<<b<<endl;
// swap(&a,&b); this is pass by refreence using pointers
// swap(a,b); this is pass by value
 //swap(a,b); this is pass by refreence using pointers

//  swap(a,b)=23;
// cout<<"the value of a is "<<a<<" and the value of b is "<<b<<endl;


cout<<"the product is "<<product(a,b)<<endl;





    return 0;
}
