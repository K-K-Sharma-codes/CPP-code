#include<iostream>
using namespace std;
class myclass{
    public:
    int data1;
    float data2;
    void display(){
        cout<<this -> data1<<" "<<this -> data2; 
    }
};
template <class T1, class T2>
class myClass{
    public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b){
        data1 = a;
        data2 = b;
        }
        void display(){
            cout<<this -> data1<<" "<<this -> data2;
        }
    };
    int main()
    {
        myClass<char, float> obj('d', 8.6);
        obj.display();
        return 0;
    }


