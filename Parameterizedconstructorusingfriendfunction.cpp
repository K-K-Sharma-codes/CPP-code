#include<iostream>
#include<cmath>
using namespace std;

class Point
{
    int x, y;

    friend void distance(Point, Point);
    public:
    Point(int a, int b){
        x = a;
        y = b;
    }
    void displayPoint(){
        cout << "The point is (" << x << " , "<< y <<")"<< endl;
    }

};
void distance(Point p1, Point p2){
    int x_diff = (p2.x - p1.x);
    int y_diff = (p2.y - p1.y);
    int diff = sqrt(pow(x_diff,2)+ pow(y_diff,2));

    cout << "The difference is " << diff << endl;
}
int main(){
    Point p(1, 2);
    Point q(4,6);

    Point c(1, 1);
    Point d(1, 1);

    Point a(1, 0);
    Point b(10,0);

    distance(p, q);
    distance(c, d);
    distance(a, b);

    return 0;
}