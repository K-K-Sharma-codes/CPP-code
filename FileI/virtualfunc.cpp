#include<iostream>
using namespace std;
    
    void func(char i){
          cout<<i<<endl;
    
}
    
void func(int c){
    cout<<c<<endl;
}
int main(){
    func('a');
    func(1);
    
    
}