#include<iostream>
using namespace std;

class Base1{
protected:
int base1int;
public:
void set_base1int(int a){
base1int = a;
}

};
class Base2{
    protected:
    int base2int;
    public:
    void set_base2int(int a){
        base2int = a;
    }
};
class Derived: public Base1, public Base2
{
    public:
    void show(){
        cout << "The value of Base1 is " << base1int<<endl;
        cout << "The value of Base2 is " << base2int<<endl;
        cout<< "the sum of these values is " << base1int + base2int << endl;
    }
};
int main()
{
    Derived jack;
    jack.set_base1int(25);
    jack.set_base2int(5);
    jack.show();

    return 0;
}


