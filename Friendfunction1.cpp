#include<iostream>
using namespace std;
class B;
class A{
int data;
public:
void setValue(int value){
    data = value;
}
friend void add(A, B);
};
class B{
int num;
public:
void setValue(int value){
    num = value;
}
friend void add (A, B);

};
void add (A o1, B o2){
cout<<"Summing datas of A and B objects gives me"<< o1.data + o2. num<<endl;
}
int main(){
    A x1;
    x1.setValue(3);

    B y1;
    y1.setValue(5);

    add(x1, y1);
    return 0;
}