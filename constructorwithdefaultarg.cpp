#include<iostream>
using namespace std;

class simple{
    int data,data1;
    public:
    simple(int a,int b=2)     //bydefault we can can this value if the value is not passed
    {
        data=a;
        data1= b;
    printdata();
    }
    void printdata(){
        cout<<endl<<data<<" "<<data1;
    }
};



int main(){
    simple a(1,34);
   
    
    return 0;
}