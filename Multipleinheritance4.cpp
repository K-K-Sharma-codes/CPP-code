#include<iostream>
using namespace std;

class SimpleCalculator{
    int a, b;
    public:
    void getDataSimple(){
        cout<<"Enter the value of a"<<endl;
        cin>>a;
        cout<<"Enter the value of b"<<endl;
        cin>>b;
    }
    void performOperationsSimple(){
        cout<<"The value of a + b is: "<<a + b<<endl;
        cout<<"The value of a - b is: "<<a - b<<endl;
        cout<<"The value of a * b is: "<<a * b<<endl;
        cout<<"The value of a / b is: "<<a / b<<endl;
}

};
