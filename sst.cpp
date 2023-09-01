#include<iostream>
#define I 323567
using namespace std;

int main(){
int n=8,ch;
cout<<"Enter no. of cylinder blocks\n";
cin>>n;
cout<<"Enter Cylinder head location\n";
cin>>ch;
int cb[n]={98,183,41,122,14,124,65,67};
cout<<"cylinder blocks are"<<endl;
for(int i=0;i<=n;i++){
cout<<cb[i]<<" ";
}
cout<<endl;
int temp;
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(cb[i]>cb[j]){
temp=cb[i];
cb[i]=cb[j];
cb[j]=temp;
}
}
}
cb[n+1];
int df[n],k=0,ak;
for(int j=0;j<n;j++)
{
if((cb[j]<ch) && (ch < cb[j+1]))
{
k=j;
for(int i=n+1;i>k;i--)
{
cb[i]=cb[i-1];
}
cb[k+1]=ch;
ak=k+1;
}
}
cout<<"cylinder blocks with cylinder head"<<endl;
for(int i=0;i<n+1;i++)
{
    cout<<cb[i]<<" ";
}
cout<<endl;

n=n+1;
int min=I, at=0,ak1=0;;
for(int i=ak+1;i<n;i++){
//for(int j=0;j<n;j++){

if(abs(ch-cb[ak+1])<min){
    min=abs(ch-cb[ak+1]);
    ak1=ak+1;

}
}
int ak2;
df[0]=min;
ch=cb[ak1];
//cout<<cb[ak1+1]<<endl;
int a=0,b=0;
for(int i=1;i<n;i++){
    if(abs(ch-cb[ak1+1])>abs(ch-cb[ak-1]) && ak>=0){
        
        b=abs(ch-cb[ak-1]);
       // cout<<b<<" ";
        ak=ak-1;
        ch=cb[ak];
        df[i]=b;
        a=i;
    }
     else if(abs(ch-cb[ak1+1])<abs(ch-cb[ak-1]) && ak>=0){
        
       b=abs(ch-cb[ak1+1]);
       //cout<<b<<" ";
        ak1=ak1+1;
        ch=cb[ak1];
        
        df[i]=b;
        a=i;
    }
}
for(int i=a;i<n;i++){
b=abs(ch-cb[ak1+1]);
df[i]=b;
ch=cb[ak1+1];
ak1+=1;

}
int sum=0;
cout<<"difference is"<<endl;
for(int j=0;j<n-1;j++){
    cout<<df[j]<<" ";
    sum+=df[j];
}
cout<<endl<<"total difference="<<sum;
return 0;
}