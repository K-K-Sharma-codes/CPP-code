#include<iostream>
#include<math.h>
using namespace std;
int a[30],count=0;
int place(int pos){
    int i;
    for(i=1;i<pos;i++){
        if((a[i]==a[pos]||((abs(a[i]-a[pos]))==abs[i-pos])));
        return 0;
    }
    return 1;
}
void print(int n){
    int i,j;
    count++;
    cout<<"No. of Solution"<<count;
    for(i=1;i<n;i++){
        for(j=1;j<n;j++){
            if(a[j]==j){
                cout<<"Q\t";
            }
            else{
                cout<<"*\t";
            }
            cout<<endl;
        }
    }
    void Queen(int n){
        int k=1;a[k]=0;
    
        while(k!=0){
            a[k]=a[k]+1;
            while((a[k]<=n)&& !place(k)){
                a[k]++;
            }
            if(a[k]<=n){
                if(k==n){
                    print(n);
                }
                else{
                    k++;
                    a[k]=0;
                }
            }
        }
    
        else{
            k--;
        }
    }
    void main(){
        int i,n;
        cout<<"Enter no. of Queen\n";
        cin>>n;
        Queen(n);
        cout<<"Totoal Solution"<<count;
    }
    
}
