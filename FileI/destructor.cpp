#include<iostream>
using namespace std;
int count=1;
class counter{
    public:
    counter(){
        cout<<"no. of object created"<<count<<endl;
        count++;
    }
    ~counter(){
        cout<<"no. of object destroyed"<<count<<endl;
    }
};
int main()
{
    cout<<"enter main"<<endl;
    counter c1,c2,c3,c4;
    {
        cout<<"enter block 1"<<endl;
        counter c5;
    }
{    
    cout<<"enter block 2"<<endl;
    counter c6;
}
cout<<"renter main"<<endl;
return 0;
}