#include <iostream>
#include<math.h>
using namespace std;


class point
{
    int x, y;

public:
friend void distance(point ,point );
    point(int a, int b){
        x=a;
        y=b;
        displayPoint();
    }

    void displayPoint()
    {
        cout << "the x axis point is " << x
             << " the y axis point is " << y<<endl;
    }
};


void distance(point p1,point p2){
 
int res ;
int xis= (p2.x- p1.x)*(p2.x- p1.x);
int yis = (p2.y- p1.y)*(p2.y- p1.y);

res = sqrt(xis + yis);
cout <<res<<endl;

}

 
int main()
{
 point p(23,43);
 point p1(2,40);
 distance(p,p1);

 
    return 0;
}