#include<iostream>
#include<cmath>
using namespace std;


class point
{
    int x , y ;
    public:
    friend void difference(point , point);
    point(int a1, int b1)
    {
        x = a1;
        y = b1;
    }
   
   
   
    void displayPoint()
    {
     cout<<"the point is (" <<x<<","<<y<<")"<<endl;

    }
};

void difference(point o1, point o2)
{
    int x_diff = o2.x - o1.x;
    int y_diff = o2.y - o1.y;


double dist = sqrt((x_diff)*(x_diff) + (y_diff)*(y_diff));
cout<<"distance is: "<<dist<<endl;
}


int main(){
    
 point p1(2,0);
 point p2(1,0);

p1.displayPoint();
p2.displayPoint();

cout<<endl;

difference(p1, p2);





    return 0;
}