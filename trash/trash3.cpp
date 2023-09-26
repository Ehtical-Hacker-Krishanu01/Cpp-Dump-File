#include <iostream>
#include <cmath>
using namespace std;

class Point
{
private:
    int x, y;
public:
    Point(int a, int b){
        x = a;
        y = b;
    }
    void displayPoint(void){
        cout<<"The Point is ("<<x<<","<<y<<")"<<endl;
    }
    static double PointDistance(Point, Point); // Change the return type to double
};

double Point::PointDistance(Point A, Point B){ // Change the return type to double
    double deltaXSquared, deltaYSquared;
    double dist;
    deltaXSquared = pow((A.x-B.x), 2);
    cout<<deltaXSquared<<endl;
    deltaYSquared = pow((A.y-B.y), 2);
    cout<<deltaYSquared<<endl;
    dist = pow((deltaXSquared + deltaYSquared), 0.5);
    return dist;
}

int main(){
    Point p(1,0), q(6,0);
    p.displayPoint();
    q.displayPoint();
    cout<<Point::PointDistance(p,q);
    return 0;
}
