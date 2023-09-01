#include<iostream>
using namespace std;

int main(){
int n,i;
cout<<"enter no of process"<<endl;
cin>>n;
int at[n],at1[n],at2[n],mx[n];
for(i=0;i<n;i++){
    cout<<"allocate resources of A for process"<<i+1<<endl;
    cin>>at[i];
    cout<<"allocate resources of B for process"<<i+1<<endl;
    cin>>at1[i];
    cout<<"allocate resources of C for process"<<i+1<<endl;
    cin>>at2[i];
    cout<<"max of A for process"<<i+1<<endl;
    cin>>mx[i];
    cout<<"mx of B for process"<<i+1<<endl;
    cin>>mx[i];
    cout<<"max of B for process"<<i+1<<endl;
    cin>>mx[i];
    
}
cout<<"process\talocate res\tmax"<<endl;
cout<<"\tA B C\tA B C"<<endl;
for(i=0;i<n;i++){
    cout<<"p"<<i+1<<"\t"<<at[i]<<"<<at1[i]<<"\t"<<at[2]<<"\t"<<mx[i]<<endl;
}
return 0;
}