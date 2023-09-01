#include<iostream>
//#define v 4
using namespace std;
int i,j,g[20][20],x[20],count,k=2,n,m=3;
void print(int x[20])
{
count++;
cout<<"\n solution # "<<count<<"\n";
for(i=1;i<=n;i++)
{
cout<<x[i]<<"\t";
}

}
void nextv(int k,int g[20][20],int n,int x[10]){
    while(1){
        x[k]=(x[k]+1)%(m+1);
        if(x[k]==0){
            return;
        }
        for( j= 1;j<=n;j++){
            if(((g[k][j])!=0) && (x[k]==x[j])){
                break;
            }
        }
        if(j==(n+1)){
            return;
        }
    }

}
void mcolouring(int k,int g[20][20],int n,int x[20]){
while(1){
    nextv(k,g,n,x);
    if(x[k]==0){
        return;
    }
    if(k==n){
        print(x);
    }
    else{
        mcolouring(k+1,g,n,x);
    }
}
}


int main()
 {

 cout<<"\n       //  M- Colouring  \\        \n ";
 cout<<"\nEnter no. of nodes\n";
 cin>>n;
cout<<"\nEnter the adjency matrix\n";

    

/*int g[v][v]={
    {0,1,0,1},
    {1,0,1,0},
    {0,1,0,1},
    {1,0,1,0}
};*/
for(i=1;i<=n;i++)
 {x[i]=0;
 for(j=1;j<=n;j++)
 {
    
 cin>>g[i][j];
 }
 }
 x[1]=1;
mcolouring(k,g,n,x);
cout<<"\n TOTAL NUMBER OF SOLUTION IS "<<count;

return 0;
}