#include<iostream>
using namespace std;
class overloaded{
    public:
    void area(int,int);
    void area(float);
    void area(float,float);
};
void overloaded :: area(int length, int breadth)
{
    cout<<"area of rectangle is:"<<length*breadth<<endl;
}

void overloaded :: area(float radius)
{
    cout<<"area of circle  is:"<<3.14*radius*radius<<endl;
}
void overloaded :: area(float base, float height)
{
    cout<<"area of triangle  is:"<<base*height/2<<endl;
}
int main()
{
    overloaded obj;
    obj.area(10,5);
    obj.area(1.5);
    obj.area(5,7);
    return 0;
}