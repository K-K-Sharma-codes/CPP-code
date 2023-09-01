#include<iostream>
using namespace std;
int main(){
    int n,a,s;
 
    cout<<"Enter no. of pages"<<endl;
    cin>>n;
    cout<<"Page sequence"<<endl;
    int ff[7]={1,3,0,3,5,6,3};
    for(int i=0;i<n;i++)
    {
        cout<<ff[i]<<" ";
    }
    cout<<endl;
    cout<<"enter no of frame size"<<endl;
    cin>>a;
    int f[a];
    int list[n];
    for(int i=0;i<a;i++)
    {
       
            f[i]=ff[i];
            list[i]=0;
            s=i; 
    }
    cout<<"ELEMENT OF FRAME "<<endl;
    int q=0;
    bool qw=false;
    for(int i=s+1;i<n;i++)
    {  
     for(int j=0;j<n;j++)
    {
          if(f[j]==ff[i])
        {
           qw=true;   
            }
        }
            if(qw==true)
            {
             list[i]=1;
             qw=false;
            }
            else
            {
            list[i]=0;
            f[q]=ff[i];
            cout<<f[q]<<" ";
            q++;
            }
    }
        
    
    cout<<endl;
    cout<<"hit/mis"<<endl;
    for(int i=0;i<n;i++){
        cout<<list[i]<<" ";
    }
    return 0;
}