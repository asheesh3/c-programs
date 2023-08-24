#include<iostream>
using namespace std;

class complex {
    int a;
    int b;
    public:
    void set_data(int v1,int v2){
        a=v1;
        b=v2;

    }
    void setDAtaBySum(complex o1,complex o2){
        a= o1.a +o2.a;
        b= o1.b +o2.b;
        
    }
    void printNumber(){
        cout<<a<<"+"<<b<<"i"<<endl;
    }
};



int main(){
    complex c1,c2 ,c3;
    c1.set_data(1,2);
    c1.printNumber();
    c2.set_data(12,23);
    c2.printNumber();
   c3.setDAtaBySum(c1,c2);
    c3.printNumber();

    return 0;
}