#include<bits/stdc++.h>
using namespace std;
int main(){
    int p;
    cout<<"Enter no. of Process"<<endl;
    cin>>p;
    int bt[p],at[p];
    for(int i=0;i<p;i++){
        cout<<"Arrival time for P["<<i+1<<"] :";
        cin>>at[i];
        cout<<"Burst time for P["<<i+1<<"] :";
        cin>>bt[i];
    }
    cout<<"Process\t\tBurst Time\t\tArrival time\t\tComp time\t\tTAT\t\tWT\t\t"<<endl;
    
    return 0;
}