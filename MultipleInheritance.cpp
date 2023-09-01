#include<iostream>
using namespace std;

class A{
    public:
    //int a =5;
    A(){
        cout<<"A's constructor called"<<endl;
    }
};

class B{
    public:
    //int b =10;
    B(){
        cout<<"B's constructor called"<<endl;
    }
};

class C: public B, public A{
    public:
    //int c =20;
    C(){
        cout<<"C's constructor called"<<endl;
    }
};

int main(){
    C obj;
    // cout<<"a ="<<obj.a<<endl;
    // cout<<"b ="<<obj.b<<endl;
    // cout<<"c ="<<obj.c<<endl;
    return 0;
}