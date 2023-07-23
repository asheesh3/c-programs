#include <iostream>
using namespace std;

//recursion

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

 
int fib(int n){
    if (n<2){
        return 1;
    }
    return fib(n-2) +fib(n-1);
}


// function overloading
int add(int a,int b){
    return a+b;
}
int add(int a,int b,int c){
    return a+b+c;
}

int main()
{

    // factorial of the number
    // cout << factorial(15);
    // cout<<fib(9);


    // function overloading
    // we can also pass the whole function in the function argument and it will return the value which will be further passed
    cout<<add(add(add(add(add(add(12,12),12),12),12),12),add(add(add(add(12,12),12),12),12));


    return 0;
}