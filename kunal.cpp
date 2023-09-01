#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter no of process"<<endl;
    cin>>n;
   
    int at[n],bt[n];
    string process[n];
    for(int i=0;i<n;i++){
        cout<<"enter no of process "<<i<<endl;
        cin>>process[i];
        cout<<"enter arrival time of process "<<i<<endl;
        cin>>at[i];
        cout<<"enter burst time of process "<<i<<endl;
        cin>>bt[i];
    }
    int temp;
    string temp1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(at[i]<at[j]){
                temp=at[i];
                at[i]=at[j];
                at[j]=temp;
                temp=bt[i];
                bt[i]=bt[j];
                bt[j]=temp;
                temp1=process[i];
                process[i]=process[j];
                process[j]=temp1;
            }

        }
    }
    int front=0,ab,min;
    string queue[n];
    int ct[n];
while(front<n){
    
    queue[front]=process[front];
   //int min=bt[front];
   //for(int k=0;k<front;k++){

 min=*min_element(bt,bt+front);
   bt[front]=bt[front]-at[front+1];
ct[front]=bt[front];
front++;
}
while(bt[front]=!NULL){
     ab=*min_element(bt,bt+front);
    ct[front]=ct[front]+bt[front];
    front--;
}
        cout<<"process\t\t\tburst time\t\t\tarrival time<\t\t\tcompletion time"<<endl;
        for(int i=0;i<n;i++){
            cout<<process[i]<<"\t\t\t"<<bt[i]<<"\t\t\t"<<at[i]<<"\t\t\t"<<ct[i]<<endl;
        
    }


}