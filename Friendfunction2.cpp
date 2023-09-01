#include<iostream>
using namespace std;
class c2;
class c1{
int Val1;
friend void exchange(c1&, c2&);
public:
void indata(int a){
    Val1 = a;
}
void display (void){
    cout<<Val1<<endl;
}


};
class c2{
int Val2;
friend void exchange (c1&,  c2&);
public:
void indata (int a){
    Val2 = a;
}
void display (void){
    cout<<Val2<<endl;
}
};
void exchange(c1 & x, c2 & y){

    int temp = x.Val1;
    x.Val1 = y.Val2;
    y.Val2 = temp;

}
int main(){
    c1 oc1;
    c2 oc2;

    oc1.indata(34);
    oc2.indata(67);
    exchange(oc1, oc2);

    cout<<"The value 0f c1 after exchanging becomes:";
    oc1.display();
    cout<<"The value 0f c2 after exchanging becomes:";
    oc2.display();

    return 0;
}
