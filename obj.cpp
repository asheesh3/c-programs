#include<iostream>
using namespace std;

class Employee{
private:
int a,b,c;


public:
int d,e;

    void setData(int a1,int b1,int c1);
    void getData(){
        cout<<"the value of a "<<a<<endl;
        cout<<"the value of b "<<b<<endl;
        cout<<"the value of c "<<c<<endl;
        cout<<"the value of d "<<d<<endl;
        cout<<"the value of e "<<e<<endl;
    }


};


void Employee :: setData(int a1,int b1,int c1){

a=a1;
b=b1;
c=c1;



}


int main(){


Employee asheesh;
asheesh.d= 34;
asheesh.e =322;
asheesh.setData(1,2,3);
asheesh.getData();



    return 0;
}